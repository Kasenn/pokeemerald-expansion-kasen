@hasMoveTutor

AldeleafBPShop_MapScripts::
	.byte 0


AldeShop_Man::
	msgbox AldeShop_Man_Text, MSGBOX_NPC
	end


AldeShop_OldMan::
	msgbox AldeShop_OldMan_Text, MSGBOX_NPC
	end


Aldeleaf_BPShop_HoldItemClerk::
	call BPShop_ItemClerk
	bpmart Aldeleaf_Items, FALSE
	goto BPShop_ItemClerkAfter
	return


	.align 2
Aldeleaf_Items:
	.2byte ITEM_DRAGON_SCALE
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_METAL_COAT
	.2byte ITEM_PRISM_SCALE
	.2byte ITEM_PROTECTOR
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_LINKING_CORD
	.2byte ITEM_NONE

Aldeleaf_BPShop_MoveTutor::
	call BPShop_MoveTutor
	bpmart Aldeleaf_MoveTutor, TRUE
	goto BPShop_MoveTutorAfter
	return


	.align 2
Aldeleaf_MoveTutor:
	.2byte MOVE_DRILL_RUN
	.2byte MOVE_BOUNCE
	.2byte MOVE_SIGNAL_BEAM
	.2byte MOVE_IRON_HEAD
	.2byte MOVE_IRON_DEFENSE
	.2byte MOVE_MAGNET_RISE
	.2byte MOVE_MAGIC_COAT
	.2byte MOVE_KNOCK_OFF
	.2byte MOVE_SKILL_SWAP
	.2byte MOVE_ICY_WIND
	.2byte MOVE_NONE
	.2byte ITEM_NONE

BPShop_MoveTutor::
	lock
	faceplayer
	goto_if_set FLAG_MET_MOVE_TUTOR, BPShop_MoveTutor_2
	setflag FLAG_MET_MOVE_TUTOR
	message BPShop_Text_TutorIntro
BPShop_MoveTutor_1:
	waitmessage
	return

BPShop_MoveTutor_2:
	message BPShop_Text_TutorWelcomeBack
	goto BPShop_MoveTutor_1


BPShop_MoveTutorAfter::
	compare VAR_RESULT, FALSE
	goto_if_eq BPShop_MoveTutorAfter_2
	msgbox BPShop_Text_ComeAgain
BPShop_MoveTutorAfter_1:
	release
	return

BPShop_MoveTutorAfter_2:
	msgbox BPShop_Text_PleaseSaveSomeBp
	goto BPShop_MoveTutorAfter_1


BPShop_ItemClerk::
	lock
	faceplayer
	message BPShop_BuySomething
	waitmessage
	return


BPShop_ItemClerkAfter::
	msgbox BPShop_ThankYouVisitWithPoints
	release
	return


AldeShop_Man_Text::
	.string "Did you know?\n"
	.string "There used to be Pokémon that would\l"
	.string "evolve only if they were traded when\l"
	.string "holding a specific item.\p"
	.string "Nowadays most of those Pokémon are\n"
	.string "able to evolve as soon as they get\l"
	.string "ahold of said items.$"

AldeShop_OldMan_Text::
	.string "Where were these shops back when\n"
	.string "I was still but a wee trainer…$"

BPShop_Text_PleaseSaveSomeBp::
	.string "Please save some BP\n"
	.string "and come see us again.$"

BPShop_Text_TutorIntro::
	.string "Welcome to the BP shop.\p"
	.string "I can train your Pokémon moves\n"
	.string "in exchange for BP.$"

BPShop_Text_TutorWelcomeBack::
	.string "Welcome to the BP shop.\n"
	.string "I am this shop's move tutor.$"

BPShop_Text_ComeAgain::
	.string "Please come again.$"

BPShop_ThankYouVisitWithPoints::
	.string "Thank you very much.\pPlease visit us when you have\nsaved up Battle Points.$"

BPShop_BuySomething::
	.string "Welcome to the BP shop.\pHere's a list of this store's\npurchasable items.$"
