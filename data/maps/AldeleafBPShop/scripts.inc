# 1 "data/maps/AldeleafBPShop/scripts.pory"
@hasMoveTutor

AldeleafBPShop_MapScripts::
	.byte 0


AldeShop_Man::
# 6 "data/maps/AldeleafBPShop/scripts.pory"
	msgbox AldeShop_Man_Text, MSGBOX_NPC
	end


AldeShop_OldMan::
# 19 "data/maps/AldeleafBPShop/scripts.pory"
	msgbox AldeShop_OldMan_Text, MSGBOX_NPC
	end


Aldeleaf_BPShop_HoldItemClerk::
# 28 "data/maps/AldeleafBPShop/scripts.pory"
	call BPShop_ItemClerk
# 29 "data/maps/AldeleafBPShop/scripts.pory"
	bpmart Aldeleaf_Items, FALSE
# 30 "data/maps/AldeleafBPShop/scripts.pory"
	goto BPShop_ItemClerkAfter
	return


	.align 2
# 32 "data/maps/AldeleafBPShop/scripts.pory"
Aldeleaf_Items:
# 33 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 34 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 35 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 36 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 37 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte ITEM_METAL_COAT
# 38 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 39 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte ITEM_PROTECTOR
# 40 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 41 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte ITEM_LINKING_CORD
	.2byte ITEM_NONE

Aldeleaf_BPShop_MoveTutor::
# 46 "data/maps/AldeleafBPShop/scripts.pory"
	call BPShop_MoveTutor
# 47 "data/maps/AldeleafBPShop/scripts.pory"
	bpmart Aldeleaf_MoveTutor, TRUE
# 48 "data/maps/AldeleafBPShop/scripts.pory"
	goto BPShop_MoveTutorAfter
	return


	.align 2
# 50 "data/maps/AldeleafBPShop/scripts.pory"
Aldeleaf_MoveTutor:
# 51 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte MOVE_DRILL_RUN
# 52 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte MOVE_BOUNCE
# 53 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte MOVE_SIGNAL_BEAM
# 54 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte MOVE_IRON_HEAD
# 55 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte MOVE_IRON_DEFENSE
# 56 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte MOVE_MAGNET_RISE
# 57 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte MOVE_MAGIC_COAT
# 58 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte MOVE_KNOCK_OFF
# 59 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte MOVE_SKILL_SWAP
# 60 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte MOVE_ICY_WIND
# 61 "data/maps/AldeleafBPShop/scripts.pory"
	.2byte MOVE_NONE
	.2byte ITEM_NONE

BPShop_MoveTutor::
# 67 "data/maps/AldeleafBPShop/scripts.pory"
	lock
# 68 "data/maps/AldeleafBPShop/scripts.pory"
	faceplayer
# 69 "data/maps/AldeleafBPShop/scripts.pory"
	goto_if_set FLAG_MET_MOVE_TUTOR, BPShop_MoveTutor_2
# 73 "data/maps/AldeleafBPShop/scripts.pory"
	setflag FLAG_MET_MOVE_TUTOR
# 74 "data/maps/AldeleafBPShop/scripts.pory"
	message BPShop_Text_TutorIntro
BPShop_MoveTutor_1:
# 76 "data/maps/AldeleafBPShop/scripts.pory"
	waitmessage
	return

BPShop_MoveTutor_2:
# 70 "data/maps/AldeleafBPShop/scripts.pory"
	message BPShop_Text_TutorWelcomeBack
	goto BPShop_MoveTutor_1


BPShop_MoveTutorAfter::
# 80 "data/maps/AldeleafBPShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BPShop_MoveTutorAfter_2
# 84 "data/maps/AldeleafBPShop/scripts.pory"
	msgbox BPShop_Text_ComeAgain
BPShop_MoveTutorAfter_1:
# 86 "data/maps/AldeleafBPShop/scripts.pory"
	release
	return

BPShop_MoveTutorAfter_2:
# 81 "data/maps/AldeleafBPShop/scripts.pory"
	msgbox BPShop_Text_PleaseSaveSomeBp
	goto BPShop_MoveTutorAfter_1


BPShop_ItemClerk::
# 106 "data/maps/AldeleafBPShop/scripts.pory"
	lock
# 107 "data/maps/AldeleafBPShop/scripts.pory"
	faceplayer
# 108 "data/maps/AldeleafBPShop/scripts.pory"
	message BPShop_BuySomething
# 109 "data/maps/AldeleafBPShop/scripts.pory"
	waitmessage
	return


BPShop_ItemClerkAfter::
# 113 "data/maps/AldeleafBPShop/scripts.pory"
	msgbox BPShop_ThankYouVisitWithPoints
# 114 "data/maps/AldeleafBPShop/scripts.pory"
	release
	return


AldeShop_Man_Text::
# 9 "data/maps/AldeleafBPShop/scripts.pory"
	.string "Did you know?\n"
	.string "There used to be Pokémon that would\l"
	.string "evolve only if they were traded when\l"
	.string "holding a specific item.\p"
	.string "Nowadays most of those Pokémon are\n"
	.string "able to evolve as soon as they get\l"
	.string "ahold of said items.$"

AldeShop_OldMan_Text::
# 22 "data/maps/AldeleafBPShop/scripts.pory"
	.string "Where were these shops back when\n"
	.string "I was still but a wee trainer…$"

BPShop_Text_PleaseSaveSomeBp::
# 88 "data/maps/AldeleafBPShop/scripts.pory"
	.string "Please save some BP\n"
	.string "and come see us again.$"

BPShop_Text_TutorIntro::
# 92 "data/maps/AldeleafBPShop/scripts.pory"
	.string "Welcome to the BP shop.\p"
	.string "I can train your Pokémon moves\n"
	.string "in exchange for BP.$"

BPShop_Text_TutorWelcomeBack::
# 97 "data/maps/AldeleafBPShop/scripts.pory"
	.string "Welcome to the BP shop.\n"
	.string "I am this shop's move tutor.$"

BPShop_Text_ComeAgain::
# 101 "data/maps/AldeleafBPShop/scripts.pory"
	.string "Please come again.$"

BPShop_ThankYouVisitWithPoints::
# 116 "data/maps/AldeleafBPShop/scripts.pory"
	.string "Thank you very much.\pPlease visit us when you have\nsaved up Battle Points.$"

BPShop_BuySomething::
# 119 "data/maps/AldeleafBPShop/scripts.pory"
	.string "Welcome to the BP shop.\pHere's a list of this store's\npurchasable items.$"
