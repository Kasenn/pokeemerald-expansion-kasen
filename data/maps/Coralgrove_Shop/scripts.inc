# 1 "data/maps/Coralgrove_Shop/scripts.pory"
@hasMoveTutor

Coralgrove_Shop_MapScripts::
	.byte 0


CGShop_Lass::
# 6 "data/maps/Coralgrove_Shop/scripts.pory"
	msgbox CGShop_Lass_Text_0, MSGBOX_NPC
	end


CGShop_Fisher::
# 11 "data/maps/Coralgrove_Shop/scripts.pory"
	msgbox CGShop_Fisher_Text_0, MSGBOX_NPC
	end


Coralgrove_BPShop_HoldItemClerk::
# 16 "data/maps/Coralgrove_Shop/scripts.pory"
	call BPShop_ItemClerk
# 17 "data/maps/Coralgrove_Shop/scripts.pory"
	bpmart Coralgrove_Items, FALSE
# 18 "data/maps/Coralgrove_Shop/scripts.pory"
	goto BPShop_ItemClerkAfter
	return


	.align 2
# 20 "data/maps/Coralgrove_Shop/scripts.pory"
Coralgrove_Items:
# 21 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 22 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte ITEM_CHARCOAL
# 23 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 24 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 25 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 26 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 27 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte ITEM_HARD_STONE
# 28 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte ITEM_MAGNET
# 29 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte ITEM_POISON_BARB
	.2byte ITEM_NONE

Coralgrove_BPShop_MoveTutor::
# 34 "data/maps/Coralgrove_Shop/scripts.pory"
	call BPShop_MoveTutor
# 35 "data/maps/Coralgrove_Shop/scripts.pory"
	bpmart Coralgrove_MoveTutor, TRUE
# 36 "data/maps/Coralgrove_Shop/scripts.pory"
	goto BPShop_MoveTutorAfter
	return


	.align 2
# 38 "data/maps/Coralgrove_Shop/scripts.pory"
Coralgrove_MoveTutor:
# 39 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte MOVE_SNORE
# 40 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte MOVE_BIND
# 41 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte MOVE_SHOCK_WAVE
# 42 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte MOVE_BUG_BITE
# 43 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte MOVE_HEAL_BELL
# 44 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte MOVE_ELECTROWEB
# 45 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte MOVE_DEFOG
# 46 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte MOVE_LOW_KICK
# 47 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte MOVE_HELPING_HAND
# 48 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte MOVE_RECYCLE
# 49 "data/maps/Coralgrove_Shop/scripts.pory"
	.2byte MOVE_NONE
	.2byte ITEM_NONE

CGShop_Lass_Text_0:
# 6 "data/maps/Coralgrove_Shop/scripts.pory"
	.string "So much cool stuff to buy!\pI don't even know what I'm\ngoing to get first!$"

CGShop_Fisher_Text_0:
# 11 "data/maps/Coralgrove_Shop/scripts.pory"
	.string "Wish I could afford this Mystic Water…$"
