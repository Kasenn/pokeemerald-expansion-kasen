@hasMoveTutor

Coralgrove_Shop_MapScripts::
	.byte 0


CGShop_Lass::
	msgbox CGShop_Lass_Text_0, MSGBOX_NPC
	end


CGShop_Fisher::
	msgbox CGShop_Fisher_Text_0, MSGBOX_NPC
	end


Coralgrove_BPShop_HoldItemClerk::
	call BPShop_ItemClerk
	bpmart Coralgrove_Items, FALSE
	goto BPShop_ItemClerkAfter
	return


	.align 2
Coralgrove_Items:
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_HARD_STONE
	.2byte ITEM_MAGNET
	.2byte ITEM_POISON_BARB
	.2byte ITEM_NONE

Coralgrove_BPShop_MoveTutor::
	call BPShop_MoveTutor
	bpmart Coralgrove_MoveTutor, TRUE
	goto BPShop_MoveTutorAfter
	return


	.align 2
Coralgrove_MoveTutor:
	.2byte MOVE_SNORE
	.2byte MOVE_BIND
	.2byte MOVE_SHOCK_WAVE
	.2byte MOVE_BUG_BITE
	.2byte MOVE_HEAL_BELL
	.2byte MOVE_ELECTROWEB
	.2byte MOVE_DEFOG
	.2byte MOVE_LOW_KICK
	.2byte MOVE_HELPING_HAND
	.2byte MOVE_RECYCLE
	.2byte MOVE_NONE
	.2byte ITEM_NONE

CGShop_Lass_Text_0:
	.string "So much cool stuff to buy!\pI don't even know what I'm\ngoing to get first!$"

CGShop_Fisher_Text_0:
	.string "Wish I could afford this Mystic Water…$"
