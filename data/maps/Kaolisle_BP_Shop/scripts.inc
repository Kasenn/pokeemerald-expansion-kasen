@hasMoveTutor

Kaolisle_BP_Shop_MapScripts::
	.byte 0


KaolisleShop_Man::
	msgbox KaolisleShop_Man_Text, MSGBOX_NPC
	end


KaolisleShop_Lass::
	msgbox KaolisleShop_Lass_Text, MSGBOX_NPC
	end


Kaolisle_BPShop_HoldItemClerk::
	call BPShop_ItemClerk
	bpmart Kaolisle_Items, FALSE
	goto BPShop_ItemClerkAfter
	return


	.align 2
Kaolisle_Items:
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_POWER_BRACER
	.2byte ITEM_POWER_BELT
	.2byte ITEM_POWER_LENS
	.2byte ITEM_POWER_BAND
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_DESTINY_KNOT
	.2byte ITEM_EVERSTONE
	.2byte ITEM_NONE

Kaolisle_BPShop_MoveTutor::
	call BPShop_MoveTutor
	bpmart Kaolisle_MoveTutor, TRUE
	goto BPShop_MoveTutorAfter
	return


	.align 2
Kaolisle_MoveTutor:
	.2byte MOVE_COVET
	.2byte MOVE_STRING_SHOT
	.2byte MOVE_BLOCK
	.2byte MOVE_SNATCH
	.2byte MOVE_UPROAR
	.2byte MOVE_WORRY_SEED
	.2byte MOVE_STEALTH_ROCK
	.2byte MOVE_SYNTHESIS
	.2byte MOVE_ZEN_HEADBUTT
	.2byte MOVE_LAST_RESORT
	.2byte MOVE_NONE
	.2byte ITEM_NONE

KaolisleShop_Man_Text::
	.string "Did you know? Power items can be used\n"
	.string "to train your current Pokémon, or to\l"
	.string "pass down some of their strongest\l"
	.string "traits to their offspring.$"

KaolisleShop_Lass_Text::
	.string "Many of the moves taught by these\n"
	.string "Move Tutors are highly technical.\p"
	.string "I'm not entirely sure which ones I\n"
	.string "should teach.$"
