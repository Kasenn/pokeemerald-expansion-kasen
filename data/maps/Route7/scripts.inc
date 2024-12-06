Route7_MapScripts::
# 2 "data/maps/Route7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ClearShinyFlag2
	.byte 0


ClearShinyFlag2::
# 6 "data/maps/Route7/scripts.pory"
	clearflag FLAG_INCREASED_SHINY_ODDS
# 7 "data/maps/Route7/scripts.pory"
	cleartrainerflag TRAINER_R8_TR6_CAMPER_M
# 8 "data/maps/Route7/scripts.pory"
	release
	end


Route8_Boy::
# 13 "data/maps/Route7/scripts.pory"
	msgbox Route8_Boy_Text, MSGBOX_NPC
	end


Route8_Sign::
# 23 "data/maps/Route7/scripts.pory"
	msgbox Route8_Sign_Text, MSGBOX_SIGN
	end


Route8_Ball1::
# 32 "data/maps/Route7/scripts.pory"
	finditem ITEM_GREAT_BALL
	end


Route8_Ball2::
# 36 "data/maps/Route7/scripts.pory"
	finditem ITEM_TM_ROCK_POLISH
	end


Route8_Trainer1_ParasolLady::
# 41 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_R8_TR1_PARASOLLADY, Route8_Trainer1_ParasolLady_Intro, Route8_Trainer1_ParasolLady_Defeat
# 42 "data/maps/Route7/scripts.pory"
	msgbox Route8_Trainer1_ParasolLady_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer2_SRJR::
# 58 "data/maps/Route7/scripts.pory"
	trainerbattle_double TRAINER_R8_TR2_SRJR, Route8_Trainer2_SRJR_Intro, Route8_Trainer2_SRJR_Defeat, Route8_Trainer2_SRJR_NotEnoughMons
# 59 "data/maps/Route7/scripts.pory"
	msgbox Route8_Trainer2_SRJR_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer2_SRJR2::
# 81 "data/maps/Route7/scripts.pory"
	trainerbattle_double TRAINER_R8_TR2_SRJR, Route8_Trainer2_SRJR2_Intro, Route8_Trainer2_SRJR2_Defeat, Route8_Trainer2_SRJR2_NotEnoughMons
# 82 "data/maps/Route7/scripts.pory"
	msgbox Route8_Trainer2_SRJR2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer3_AromaLady::
# 101 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_R8_TR3_AROMALADY, Route8_Trainer3_AromaLady_Intro, Route8_Trainer3_AromaLady_Defeat
# 102 "data/maps/Route7/scripts.pory"
	msgbox Route8_Trainer3_AromaLady_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer4_Youngster::
# 121 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_R8_TR4_YOUNGSTER, Route8_Trainer4_Youngster_Intro, Route8_Trainer4_Youngster_Defeat
# 122 "data/maps/Route7/scripts.pory"
	msgbox Route8_Trainer4_Youngster_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer5_Psychic_F::
# 139 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_R8_TR5_PSYCHIC_F, Route8_Trainer5_Psychic_F_Intro, Route8_Trainer5_Psychic_F_Defeat
# 140 "data/maps/Route7/scripts.pory"
	msgbox Route8_Trainer5_Psychic_F_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer6_Camper_M::
# 156 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_R8_TR6_CAMPER_M, Route8_Trainer6_Camper_M_Intro, Route8_Trainer6_Camper_M_Defeat
# 157 "data/maps/Route7/scripts.pory"
	msgbox Route8_Trainer6_Camper_M_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer7_Triathlete_M::
# 173 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_R8_TR7_TRIATHLETE_M, Route8_Trainer7_Triathlete_M_Intro, Route8_Trainer7_Triathlete_M_Defeat
# 174 "data/maps/Route7/scripts.pory"
	msgbox Route8_Trainer7_Triathlete_M_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer8_Gentleman::
# 189 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_R8_TR8_GENTLEMAN, Route8_Trainer8_Gentleman_Intro, Route8_Trainer8_Gentleman_Defeat
# 190 "data/maps/Route7/scripts.pory"
	msgbox Route8_Trainer8_Gentleman_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer9_Hiker::
# 204 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_R8_TR9_HIKER, Route8_Trainer9_Hiker_Intro, Route8_Trainer9_Hiker_Defeat
# 205 "data/maps/Route7/scripts.pory"
	msgbox Route8_Trainer9_Hiker_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer10_OldCouple::
# 219 "data/maps/Route7/scripts.pory"
	trainerbattle_double TRAINER_R8_TR10_OLDCOUPLE, Route8_Trainer10_OldCouple_Intro, Route8_Trainer10_OldCouple_Defeat, Route8_Trainer10_OldCouple_NotEnoughMons
# 220 "data/maps/Route7/scripts.pory"
	msgbox Route8_Trainer10_OldCouple_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer10_OldCouple2::
# 245 "data/maps/Route7/scripts.pory"
	trainerbattle_double TRAINER_R8_TR10_OLDCOUPLE, Route8_Trainer10_OldCouple2_Intro, Route8_Trainer10_OldCouple2_Defeat, Route8_Trainer10_OldCouple2_NotEnoughMons
# 246 "data/maps/Route7/scripts.pory"
	msgbox Route8_Trainer10_OldCouple2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route8_Trainer11_BirdKeeper::
# 270 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_R8_TR11_BIRDKEEPER, Route8_Trainer11_BirdKeeper_Intro, Route8_Trainer11_BirdKeeper_Defeat
# 271 "data/maps/Route7/scripts.pory"
	msgbox Route8_Trainer11_BirdKeeper_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Grotto_Entrance::
# 291 "data/maps/Route7/scripts.pory"
	lock
# 292 "data/maps/Route7/scripts.pory"
	msgbox GoInsideGrotto, MSGBOX_YESNO
# 293 "data/maps/Route7/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route7_Grotto_Entrance_2
# 297 "data/maps/Route7/scripts.pory"
	warp MAP_ROUTE7_GROTTO, 6, 19
# 298 "data/maps/Route7/scripts.pory"
	waitstate
# 299 "data/maps/Route7/scripts.pory"
	release
	return

Route7_Grotto_Entrance_2:
# 294 "data/maps/Route7/scripts.pory"
	release
	end


Route8_Boy_Text::
# 16 "data/maps/Route7/scripts.pory"
	.string "Why'd they have to set the flower shop\n"
	.string "in the middle of nowhere.\l"
	.string "I'm tired of walking all the way here…$"

Route8_Sign_Text::
# 26 "data/maps/Route7/scripts.pory"
	.string "{LEFT_ARROW} Pretty Petal flower shop\n"
	.string "{RIGHT_ARROW} Skyloch Village\l"
	.string "{DOWN_ARROW} Shoreslate City$"

Route8_Trainer1_ParasolLady_Intro::
# 45 "data/maps/Route7/scripts.pory"
	.string "I just bought this parasol.\n"
	.string "My cuteness should be up by a third!$"

Route8_Trainer1_ParasolLady_Defeat::
# 49 "data/maps/Route7/scripts.pory"
	.string "You're better than me by about\n"
	.string "five times!$"

Route8_Trainer1_ParasolLady_PostBattle::
# 53 "data/maps/Route7/scripts.pory"
	.string "Using accessories effectively is\n"
	.string "the secret behind fashion appeal.$"

Route8_Trainer2_SRJR_Intro::
# 62 "data/maps/Route7/scripts.pory"
	.string "Kate: Together, we're fearless!\n"
	.string "We'll demonstrate how tough we are!$"

Route8_Trainer2_SRJR_Defeat::
# 66 "data/maps/Route7/scripts.pory"
	.string "Kate: I blew it in front of my junior\n"
	.string "student partner…$"

Route8_Trainer2_SRJR_PostBattle::
# 70 "data/maps/Route7/scripts.pory"
	.string "Kate: When someone's relying on me,\n"
	.string "I get this urge to look cool in front\l"
	.string "of them…$"

Route8_Trainer2_SRJR_NotEnoughMons::
# 75 "data/maps/Route7/scripts.pory"
	.string "Kate: If you've only got one Pokémon,\n"
	.string "we can't battle with you.\p"
	.string "That would be bullying.$"

Route8_Trainer2_SRJR2_Intro::
# 85 "data/maps/Route7/scripts.pory"
	.string "Joy: Together, we're fearless!\n"
	.string "We'll demonstrate how tough we are!$"

Route8_Trainer2_SRJR2_Defeat::
# 89 "data/maps/Route7/scripts.pory"
	.string "Joy: Please forgive me, Kate!$"

Route8_Trainer2_SRJR2_PostBattle::
# 92 "data/maps/Route7/scripts.pory"
	.string "Joy: Ehehe, I'll have to train with Kate,\n"
	.string "my senior student partner, again.$"

Route8_Trainer2_SRJR2_NotEnoughMons::
# 96 "data/maps/Route7/scripts.pory"
	.string "Joy: You need at least two Pokémon\n"
	.string "if you're going to challenge us!$"

Route8_Trainer3_AromaLady_Intro::
# 105 "data/maps/Route7/scripts.pory"
	.string "Oh, aren't you an adorable trainer!\n"
	.string "Please, I need a romantic battle!\l"
	.string "I'm somewhat decent!$"

Route8_Trainer3_AromaLady_Defeat::
# 110 "data/maps/Route7/scripts.pory"
	.string "Oh, how strong you are!\n"
	.string "You've given me quite a shock!$"

Route8_Trainer3_AromaLady_PostBattle::
# 114 "data/maps/Route7/scripts.pory"
	.string "Are you busy right now?\n"
	.string "I was thinking that maybe we can have\l"
	.string "a rematch right now…\l"
	.string "But it's all right if you're busy.$"

Route8_Trainer4_Youngster_Intro::
# 125 "data/maps/Route7/scripts.pory"
	.string "I learned all sorts of things at the\n"
	.string "Trainer's School.\p"
	.string "I want to test things out for real!$"

Route8_Trainer4_Youngster_Defeat::
# 130 "data/maps/Route7/scripts.pory"
	.string "I slacked off in school…\n"
	.string "That's why I lost.$"

Route8_Trainer4_Youngster_PostBattle::
# 134 "data/maps/Route7/scripts.pory"
	.string "Maybe I need to go back to school and\n"
	.string "redo some of the courses…$"

Route8_Trainer5_Psychic_F_Intro::
# 143 "data/maps/Route7/scripts.pory"
	.string "Ahahahaha!\n"
	.string "I'll dazzle you with my wonders!$"

Route8_Trainer5_Psychic_F_Defeat::
# 147 "data/maps/Route7/scripts.pory"
	.string "I wondrously lost!$"

Route8_Trainer5_Psychic_F_PostBattle::
# 150 "data/maps/Route7/scripts.pory"
	.string "You managed to win only because it was\n"
	.string "a wonder! Yes, a wonder!\l"
	.string "Don't think you can win all the time!$"

Route8_Trainer6_Camper_M_Intro::
# 160 "data/maps/Route7/scripts.pory"
	.string "I love Pokémon battles so much!\n"
	.string "I could do this all day!$"

Route8_Trainer6_Camper_M_Defeat::
# 164 "data/maps/Route7/scripts.pory"
	.string "Again! Again!$"

Route8_Trainer6_Camper_M_PostBattle::
# 167 "data/maps/Route7/scripts.pory"
	.string "My Pokémon need a moment's rest, but\n"
	.string "if you're up for it, I'd like to\l"
	.string "battle again soon!$"

Route8_Trainer7_Triathlete_M_Intro::
# 177 "data/maps/Route7/scripts.pory"
	.string "I'm in the middle of practicing for\n"
	.string "a triathlon but sure, I'll battle you!$"

Route8_Trainer7_Triathlete_M_Defeat::
# 181 "data/maps/Route7/scripts.pory"
	.string "I ran out of energy!$"

Route8_Trainer7_Triathlete_M_PostBattle::
# 184 "data/maps/Route7/scripts.pory"
	.string "I'm clearly not strong enough.\n"
	.string "Need to keep practicing!$"

Route8_Trainer8_Gentleman_Intro::
# 193 "data/maps/Route7/scripts.pory"
	.string "Might I interest you in a\n"
	.string "Pokémon battle?$"

Route8_Trainer8_Gentleman_Defeat::
# 197 "data/maps/Route7/scripts.pory"
	.string "How splendiferous!$"

Route8_Trainer8_Gentleman_PostBattle::
# 200 "data/maps/Route7/scripts.pory"
	.string "A fine battle that was!$"

Route8_Trainer9_Hiker_Intro::
# 208 "data/maps/Route7/scripts.pory"
	.string "We'll rock you hard!$"

Route8_Trainer9_Hiker_Defeat::
# 211 "data/maps/Route7/scripts.pory"
	.string "No contest at all!$"

Route8_Trainer9_Hiker_PostBattle::
# 214 "data/maps/Route7/scripts.pory"
	.string "I should try different Pokémon\n"
	.string "types, that's what I ought to do.$"

Route8_Trainer10_OldCouple_Intro::
# 223 "data/maps/Route7/scripts.pory"
	.string "Jay: We've been married for\n"
	.string "fifty years.\p"
	.string "The bond we share as a couple could\n"
	.string "never be broken.$"

Route8_Trainer10_OldCouple_Defeat::
# 229 "data/maps/Route7/scripts.pory"
	.string "Jay: Oh, dear.\n"
	.string "We've lost, my dear husband.$"

Route8_Trainer10_OldCouple_PostBattle::
# 233 "data/maps/Route7/scripts.pory"
	.string "Jay: Fifty years of marriage…\p"
	.string "If we ever argued, we always settled\n"
	.string "it with a Pokémon battle…$"

Route8_Trainer10_OldCouple_NotEnoughMons::
# 238 "data/maps/Route7/scripts.pory"
	.string "Jay: Well, well, aren't you a young\n"
	.string "trainer?\p"
	.string "If you'd care to battle with us, you'll\n"
	.string "have to come back with more Pokémon.$"

Route8_Trainer10_OldCouple2_Intro::
# 249 "data/maps/Route7/scripts.pory"
	.string "John: We've always battled Pokémon\n"
	.string "together as a twosome.\l"
	.string "We've confidence in ourselves.$"

Route8_Trainer10_OldCouple2_Defeat::
# 254 "data/maps/Route7/scripts.pory"
	.string "John: Oh, my.\n"
	.string "We've lost, dear wife.$"

Route8_Trainer10_OldCouple2_PostBattle::
# 258 "data/maps/Route7/scripts.pory"
	.string "John: We've been married for\n"
	.string "fifty years.\p"
	.string "Come to think of it, I've yet to beat\n"
	.string "my dear wife in a battle.$"

Route8_Trainer10_OldCouple2_NotEnoughMons::
# 264 "data/maps/Route7/scripts.pory"
	.string "John: Well, well, what a young trainer!\p"
	.string "Will you battle with us? If so, you'll\n"
	.string "have to return with more Pokémon.$"

Route8_Trainer11_BirdKeeper_Intro::
# 274 "data/maps/Route7/scripts.pory"
	.string "It's over for you!\n"
	.string "I have the high ground!$"

Route8_Trainer11_BirdKeeper_Defeat::
# 278 "data/maps/Route7/scripts.pory"
	.string "I was too confident and wasn't\n"
	.string "able to keep level-headed…$"

Route8_Trainer11_BirdKeeper_PostBattle::
# 282 "data/maps/Route7/scripts.pory"
	.string "The most important thing in Pokémon\n"
	.string "battles is to keep your cool\l"
	.string "and think straight.\p"
	.string "What I did was rush you head-on\n"
	.string "without thinking.$"
