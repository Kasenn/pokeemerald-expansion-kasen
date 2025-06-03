# 1 "data/maps/Sandstone_BP_Shop/scripts.pory"
@hasMoveTutor

Sandstone_BP_Shop_MapScripts::
	.byte 0


SandstoneShop_Man::
# 6 "data/maps/Sandstone_BP_Shop/scripts.pory"
	msgbox SandstoneShop_Man_Text, MSGBOX_NPC
	end


SandstoneShop_Lass::
# 16 "data/maps/Sandstone_BP_Shop/scripts.pory"
	msgbox SandstoneShop_Lass_Text, MSGBOX_NPC
	end


Sandstone_BPShop_HoldItemClerk::
# 29 "data/maps/Sandstone_BP_Shop/scripts.pory"
	call BPShop_ItemClerk
# 30 "data/maps/Sandstone_BP_Shop/scripts.pory"
	bpmart Sandstone_Items, FALSE
# 31 "data/maps/Sandstone_BP_Shop/scripts.pory"
	goto BPShop_ItemClerkAfter
	return


	.align 2
# 33 "data/maps/Sandstone_BP_Shop/scripts.pory"
Sandstone_Items:
# 34 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 35 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 36 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 37 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 38 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 39 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 40 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_LAX_MINT
# 41 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 42 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 43 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_MILD_MINT
# 44 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_RASH_MINT
# 45 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 46 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_CALM_MINT
# 47 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 48 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 49 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 50 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 51 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 52 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 53 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 54 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Sandstone_BPShop_MoveTutor::
# 59 "data/maps/Sandstone_BP_Shop/scripts.pory"
	call BPShop_MoveTutor
# 60 "data/maps/Sandstone_BP_Shop/scripts.pory"
	bpmart Sandstone_MoveTutor, TRUE
# 61 "data/maps/Sandstone_BP_Shop/scripts.pory"
	goto BPShop_MoveTutorAfter
	return


	.align 2
# 63 "data/maps/Sandstone_BP_Shop/scripts.pory"
Sandstone_MoveTutor:
# 64 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte MOVE_THUNDER_WAVE
# 65 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte MOVE_FIRE_PUNCH
# 66 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte MOVE_THUNDER_PUNCH
# 67 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte MOVE_ICE_PUNCH
# 68 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte MOVE_DRAIN_PUNCH
# 69 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte MOVE_PSYCH_UP
# 70 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte MOVE_PAIN_SPLIT
# 71 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte MOVE_TAILWIND
# 72 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte MOVE_IRON_TAIL
# 73 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte MOVE_ENDEAVOR
# 74 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.2byte MOVE_NONE
	.2byte ITEM_NONE

SandstoneShop_Man_Text::
# 9 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.string "These items are really expensive.\p"
	.string "I'm not sure how I'm meant to\n"
	.string "afford them…$"

SandstoneShop_Lass_Text::
# 19 "data/maps/Sandstone_BP_Shop/scripts.pory"
	.string "The nature mints are wondrous herbs\n"
	.string "that can alter the strengths and\l"
	.string "weaknesses of a Pokémon.\p"
	.string "Despite its name, a nature mint does\n"
	.string "not actually change the Pokémon's\l"
	.string "original nature.$"
