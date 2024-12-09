@hasMoveTutor

Sandstone_BP_Shop_MapScripts::
	.byte 0


SandstoneShop_Man::
	msgbox SandstoneShop_Man_Text, MSGBOX_NPC
	end


SandstoneShop_Lass::
	msgbox SandstoneShop_Lass_Text, MSGBOX_NPC
	end


Sandstone_BPShop_HoldItemClerk::
	call BPShop_ItemClerk
	bpmart Sandstone_Items, FALSE
	goto BPShop_ItemClerkAfter
	return


	.align 2
Sandstone_Items:
	.2byte ITEM_LONELY_MINT
	.2byte ITEM_ADAMANT_MINT
	.2byte ITEM_NAUGHTY_MINT
	.2byte ITEM_BRAVE_MINT
	.2byte ITEM_BOLD_MINT
	.2byte ITEM_IMPISH_MINT
	.2byte ITEM_LAX_MINT
	.2byte ITEM_RELAXED_MINT
	.2byte ITEM_MODEST_MINT
	.2byte ITEM_MILD_MINT
	.2byte ITEM_RASH_MINT
	.2byte ITEM_QUIET_MINT
	.2byte ITEM_CALM_MINT
	.2byte ITEM_GENTLE_MINT
	.2byte ITEM_CAREFUL_MINT
	.2byte ITEM_SASSY_MINT
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_HASTY_MINT
	.2byte ITEM_JOLLY_MINT
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Sandstone_BPShop_MoveTutor::
	call BPShop_MoveTutor
	bpmart Sandstone_MoveTutor, TRUE
	goto BPShop_MoveTutorAfter
	return


	.align 2
Sandstone_MoveTutor:
	.2byte MOVE_THUNDER_WAVE
	.2byte MOVE_FIRE_PUNCH
	.2byte MOVE_THUNDER_PUNCH
	.2byte MOVE_ICE_PUNCH
	.2byte MOVE_DRAIN_PUNCH
	.2byte MOVE_PSYCH_UP
	.2byte MOVE_PAIN_SPLIT
	.2byte MOVE_TAILWIND
	.2byte MOVE_IRON_TAIL
	.2byte MOVE_ENDEAVOR
	.2byte MOVE_NONE
	.2byte ITEM_NONE

SandstoneShop_Man_Text::
	.string "These items are really expensive.\p"
	.string "I'm not sure how I'm meant to\n"
	.string "afford them…$"

SandstoneShop_Lass_Text::
	.string "The nature mints are wondrous herbs\n"
	.string "that can alter the strengths and\l"
	.string "weaknesses of a Pokémon.\p"
	.string "Despite its name, a nature mint does\n"
	.string "not actually change the Pokémon's\l"
	.string "original nature.$"
