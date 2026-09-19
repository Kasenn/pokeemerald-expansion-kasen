PearlwoodPoint_MapScripts::
# 6 "data/maps/PearlwoodPoint/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PearlwoodPoint_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PearlwoodPoint_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/PearlwoodPoint/scripts.pory"
	setflag FLAG_VISITED_PEARLWOOD_POINT
# 8 "data/maps/PearlwoodPoint/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_PKMN_OBTAINED
	goto_if_ne PearlwoodPoint_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

PearlwoodPoint_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/PearlwoodPoint/scripts.pory"
	setflag FLAG_TEMP_1
	return


Pearlwood_Point_NoPokemon1::
# 13 "data/maps/PearlwoodPoint/scripts.pory"
	setvar VAR_TEMP_1, 1
# 14 "data/maps/PearlwoodPoint/scripts.pory"
	goto Pearlwood_Point_NoPokemon
	return


Pearlwood_Point_NoPokemon2::
# 18 "data/maps/PearlwoodPoint/scripts.pory"
	setvar VAR_TEMP_1, 2
# 19 "data/maps/PearlwoodPoint/scripts.pory"
	goto Pearlwood_Point_NoPokemon
	return


Pearlwood_Point_NoPokemon::
# 23 "data/maps/PearlwoodPoint/scripts.pory"
	lock
# 24 "data/maps/PearlwoodPoint/scripts.pory"
	turnobject LOCALID_PEARLWOOD_LASS, DIR_SOUTH
# 25 "data/maps/PearlwoodPoint/scripts.pory"
	playse SE_PIN
# 26 "data/maps/PearlwoodPoint/scripts.pory"
	exclamationmark LOCALID_PEARLWOOD_LASS
# 27 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox Pearlwood_Point_WatchOut, MSGBOX_AUTOCLOSE
# 28 "data/maps/PearlwoodPoint/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Pearlwood_Point_NoPokemon_2
# 32 "data/maps/PearlwoodPoint/scripts.pory"
	waitmove LOCALID_PLAYER, Walk1Up
Pearlwood_Point_NoPokemon_1:
# 34 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox Pearlwood_Point_WildPokemon, MSGBOX_AUTOCLOSE
# 35 "data/maps/PearlwoodPoint/scripts.pory"
	waitmove LOCALID_PLAYER, Walk1Left
# 36 "data/maps/PearlwoodPoint/scripts.pory"
	release
	return

Pearlwood_Point_NoPokemon_2:
# 29 "data/maps/PearlwoodPoint/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto Pearlwood_Point_NoPokemon_1


Pearlwood_BrotherFightRight::
# 49 "data/maps/PearlwoodPoint/scripts.pory"
	setvar VAR_TEMP_2, 1
# 50 "data/maps/PearlwoodPoint/scripts.pory"
	goto Pearlwood_BrotherFightMain
	return


Pearlwood_BrotherFightLeft::
# 53 "data/maps/PearlwoodPoint/scripts.pory"
	setvar VAR_TEMP_2, 2
# 54 "data/maps/PearlwoodPoint/scripts.pory"
	goto Pearlwood_BrotherFightMain
	return


Pearlwood_BrotherFightMain::
# 58 "data/maps/PearlwoodPoint/scripts.pory"
	lock
# 59 "data/maps/PearlwoodPoint/scripts.pory"
	safefollow
# 60 "data/maps/PearlwoodPoint/scripts.pory"
	playse SE_PIN
# 61 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox Pearlwood_BrotherFightMain_Text_0, MSGBOX_AUTOCLOSE
# 62 "data/maps/PearlwoodPoint/scripts.pory"
	delay 30
# 63 "data/maps/PearlwoodPoint/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Pearlwood_BrotherFightMain_2
# 67 "data/maps/PearlwoodPoint/scripts.pory"
	waitmove LOCALID_PEARLWOOD_BROTHER, Pearlwood_BrotherFightMain_Movement_0
Pearlwood_BrotherFightMain_1:
# 69 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox BrotherFightIntro
# 70 "data/maps/PearlwoodPoint/scripts.pory"
	setflag FLAG_CONTINUE_AFTER_WHITEOUT
# 71 "data/maps/PearlwoodPoint/scripts.pory"
	setflag FLAG_FIRST_BATTLE
# 72 "data/maps/PearlwoodPoint/scripts.pory"
	setflag FLAG_HEAL_AFTER_BATTLE
# 73 "data/maps/PearlwoodPoint/scripts.pory"
	playbgm MUS_ENCOUNTER_MALE, FALSE
# 74 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox Pearlwood_Brother_Intro
# 75 "data/maps/PearlwoodPoint/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER_1_PEARLWOOD, Pearlwood_Brother_Outro
# 76 "data/maps/PearlwoodPoint/scripts.pory"
	goto PearlwoodWon
	return

Pearlwood_BrotherFightMain_2:
# 64 "data/maps/PearlwoodPoint/scripts.pory"
	waitmove LOCALID_PEARLWOOD_BROTHER, Walk5Up
	goto Pearlwood_BrotherFightMain_1


PearlwoodWon::
# 102 "data/maps/PearlwoodPoint/scripts.pory"
	safefollow
	checkplayergender
# 0 "data/maps/PearlwoodPoint/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PearlwoodWon_2
# 104 "data/maps/PearlwoodPoint/scripts.pory"
	bufferstring STR_VAR_1, PearlwoodWon_Text_1
PearlwoodWon_1:
# 105 "data/maps/PearlwoodPoint/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 106 "data/maps/PearlwoodPoint/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PearlwoodWon_6
# 110 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox PlayerHouse1F_Apology, MSGBOX_AUTOCLOSE
PearlwoodWon_5:
# 112 "data/maps/PearlwoodPoint/scripts.pory"
	playse SE_PIN
# 113 "data/maps/PearlwoodPoint/scripts.pory"
	exclamationmark LOCALID_PEARLWOOD_BROTHER
# 114 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox BrotherWatch
# 115 "data/maps/PearlwoodPoint/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 116 "data/maps/PearlwoodPoint/scripts.pory"
	setflag FLAG_SYS_JOURNAL_GET
# 117 "data/maps/PearlwoodPoint/scripts.pory"
	message PearlwoodWon_Text_2
# 118 "data/maps/PearlwoodPoint/scripts.pory"
	waitfanfare
# 119 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox ViewJournal
# 120 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox BrotherGoodbye, MSGBOX_AUTOCLOSE
# 121 "data/maps/PearlwoodPoint/scripts.pory"
	waitmove LOCALID_PEARLWOOD_BROTHER, Walk5Down
# 122 "data/maps/PearlwoodPoint/scripts.pory"
	removeobject LOCALID_PEARLWOOD_BROTHER
# 123 "data/maps/PearlwoodPoint/scripts.pory"
	clearflag FLAG_CONTINUE_AFTER_WHITEOUT
# 124 "data/maps/PearlwoodPoint/scripts.pory"
	clearflag FLAG_FIRST_BATTLE
# 125 "data/maps/PearlwoodPoint/scripts.pory"
	clearflag FLAG_HEAL_AFTER_BATTLE
# 126 "data/maps/PearlwoodPoint/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_BROTHER_FOUGHT
# 127 "data/maps/PearlwoodPoint/scripts.pory"
	delay 30
# 128 "data/maps/PearlwoodPoint/scripts.pory"
	release
	return

PearlwoodWon_2:
# 103 "data/maps/PearlwoodPoint/scripts.pory"
	bufferstring STR_VAR_1, PearlwoodWon_Text_0
	goto PearlwoodWon_1

PearlwoodWon_6:
# 107 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox PearlwoodBrotherPrize, MSGBOX_AUTOCLOSE
	goto PearlwoodWon_5


# 67 "data/maps/PearlwoodPoint/scripts.pory"
Pearlwood_BrotherFightMain_Movement_0:
# 67 "data/maps/PearlwoodPoint/scripts.pory"
	walk_left
# 67 "data/maps/PearlwoodPoint/scripts.pory"
	walk_up
# 67 "data/maps/PearlwoodPoint/scripts.pory"
	walk_up
# 67 "data/maps/PearlwoodPoint/scripts.pory"
	walk_up
# 67 "data/maps/PearlwoodPoint/scripts.pory"
	walk_up
# 67 "data/maps/PearlwoodPoint/scripts.pory"
	walk_up
	step_end

Pearlwood_BrotherFightMain_Text_0:
# 61 "data/maps/PearlwoodPoint/scripts.pory"
	.string "???: {PLAYER}!$"

PearlwoodWon_Text_0:
# 103 "data/maps/PearlwoodPoint/scripts.pory"
	.string "she$"

PearlwoodWon_Text_1:
# 104 "data/maps/PearlwoodPoint/scripts.pory"
	.string "he$"

PearlwoodWon_Text_2:
# 117 "data/maps/PearlwoodPoint/scripts.pory"
	.string "{PLAYER} obtained the Journal!$"

Pearlwood_Point_WatchOut::
# 38 "data/maps/PearlwoodPoint/scripts.pory"
	.string "Wait!$"

Pearlwood_Point_WildPokemon::
# 41 "data/maps/PearlwoodPoint/scripts.pory"
	.string "There are a lot of wild\n"
	.string "Pokémon living outside the town!\p"
	.string "It's dangerous to leave the town\n"
	.string "without your own Pokémon.$"

BrotherFightIntro::
# 79 "data/maps/PearlwoodPoint/scripts.pory"
	.string "{BROTHER}: I see you got your Pokémon\n"
	.string "from the professor.\p"
	.string "Well? What're we waiting for?$"

Pearlwood_Brother_Intro::
# 85 "data/maps/PearlwoodPoint/scripts.pory"
	.string "Let's see if it's any good\n"
	.string "in a Pokémon battle!\p"
	.string "Oh, don't worry.\p"
	.string "I won't use the same Pokémon I\n"
	.string "used during my fight against\l"
	.string "the Kanto Pokémon League.\p"
	.string "That would be simply too unfair.\p"
	.string "However, don't expect any mercy from\n"
	.string "me either!$"

Pearlwood_Brother_Outro::
# 97 "data/maps/PearlwoodPoint/scripts.pory"
	.string "Of course you picked THAT one!$"

ViewJournal::
# 131 "data/maps/PearlwoodPoint/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Certain events may be recorded in the\n"
	.string "Journal when they are discovered.\p"
	.string "The Journal can be accessed through\n"
	.string "the Start Menu.$"

BrotherWatch::
# 138 "data/maps/PearlwoodPoint/scripts.pory"
	.string "Oh!\p"
	.string "Before I leave, there's something\n"
	.string "I meant to give you.$"

ObtainedWatch::
# 143 "data/maps/PearlwoodPoint/scripts.pory"
	.string "{PLAYER} obtained a wristwatch!$"

ViewClock::
# 146 "data/maps/PearlwoodPoint/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}You can now view the time by\n"
	.string "pressing the START button!$"

BrotherGoodbye::
# 150 "data/maps/PearlwoodPoint/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{BROTHER}: Catch ya later!$"

PlayerHouse1F_Apology::
# 154 "data/maps/PearlwoodPoint/scripts.pory"
	.string "{BROTHER}: Not a bad attempt\n"
	.string "for a rookie.\p"
	.string "But, with my experience as\n"
	.string "a trainer, you'll need to work\l"
	.string "hard if you want to beat me.\p"
	.string "Anyway, have you thought about\n"
	.string "what you're going to do next?\p"
	.string "I talked with our neighbor {RIVAL}\n"
	.string "and {STR_VAR_1} mentioned {STR_VAR_1} was going to\l"
	.string "take on the Pokémon Gym Challenge.\p"
	.string "We should take part on the challenge\n"
	.string "as well and see which of us three\l"
	.string "is the best trainer!\p"
	.string "{RIVAL} set out just a few moments\n"
	.string "ago, so we better get moving as well\l"
	.string "or we'll fall behind!\p"
	.string "Don't know about you but I'm not\n"
	.string "content with a second place.$"

PearlwoodBrotherPrize::
# 175 "data/maps/PearlwoodPoint/scripts.pory"
	.string "Hmph… I guess I should not\n"
	.string "have underestimated you.\p"
	.string "Anyway, have you thought about\n"
	.string "what you're going to do next?\p"
	.string "I talked with our neighbor {RIVAL}\n"
	.string "and {STR_VAR_1} mentioned {STR_VAR_1} was going to\l"
	.string "take on the Pokémon Gym Challenge.\p"
	.string "We should take part on the challenge\n"
	.string "as well and see which of us three\l"
	.string "is the best trainer!\p"
	.string "{RIVAL} set out just a few moments\n"
	.string "ago, so we better get moving as well\l"
	.string "or we'll fall behind!\p"
	.string "Don't know about you but I'm not\n"
	.string "content with a second place.$"
