# 1 "data/maps/Kaolisle_BP_Shop/scripts.pory"
@hasMoveTutor

Kaolisle_BP_Shop_MapScripts::
	.byte 0


KaolisleShop_Man::
# 6 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	msgbox KaolisleShop_Man_Text, MSGBOX_NPC
	end


KaolisleShop_Lass::
# 17 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	msgbox KaolisleShop_Lass_Text, MSGBOX_NPC
	end


Kaolisle_BPShop_HoldItemClerk::
# 28 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	call BPShop_ItemClerk
# 29 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	bpmart Kaolisle_Items, FALSE
# 30 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	goto BPShop_ItemClerkAfter
	return


	.align 2
# 32 "data/maps/Kaolisle_BP_Shop/scripts.pory"
Kaolisle_Items:
# 33 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 34 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 35 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte ITEM_POWER_BELT
# 36 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte ITEM_POWER_LENS
# 37 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte ITEM_POWER_BAND
# 38 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 39 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 40 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte ITEM_EVERSTONE
	.2byte ITEM_NONE

Kaolisle_BPShop_MoveTutor::
# 45 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	call BPShop_MoveTutor
# 46 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	bpmart Kaolisle_MoveTutor, TRUE
# 47 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	goto BPShop_MoveTutorAfter
	return


	.align 2
# 49 "data/maps/Kaolisle_BP_Shop/scripts.pory"
Kaolisle_MoveTutor:
# 50 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte MOVE_COVET
# 51 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte MOVE_STRING_SHOT
# 52 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte MOVE_BLOCK
# 53 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte MOVE_SNATCH
# 54 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte MOVE_UPROAR
# 55 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte MOVE_WORRY_SEED
# 56 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte MOVE_STEALTH_ROCK
# 57 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte MOVE_SYNTHESIS
# 58 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte MOVE_ZEN_HEADBUTT
# 59 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte MOVE_LAST_RESORT
# 60 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.2byte MOVE_NONE
	.2byte ITEM_NONE

KaolisleShop_Man_Text::
# 9 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.string "Did you know? Power items can be used\n"
	.string "to train your current Pokémon, or to\l"
	.string "pass down some of their strongest\l"
	.string "traits to their offspring.$"

KaolisleShop_Lass_Text::
# 20 "data/maps/Kaolisle_BP_Shop/scripts.pory"
	.string "Many of the moves taught by these\n"
	.string "Move Tutors are highly technical.\p"
	.string "I'm not entirely sure which ones I\n"
	.string "should teach.$"
