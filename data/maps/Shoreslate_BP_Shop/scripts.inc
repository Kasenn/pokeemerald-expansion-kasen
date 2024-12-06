# 1 "data/maps/Shoreslate_BP_Shop/scripts.pory"
@hasMoveTutor

Shoreslate_BP_Shop_MapScripts::
	.byte 0


ShoreslateShop_Man::
# 6 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	faceplayer
# 7 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	lockall
# 8 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	msgbox ShoreslateShop_Man_Text, MSGBOX_YESNO
# 9 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShoreslateShop_Man_2
ShoreslateShop_Man_1:
# 12 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	waitmessage
# 13 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	closemessage
# 14 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	release
	end

ShoreslateShop_Man_2:
# 10 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	msgbox ShoreslateShop_Man_TextContinued, MSGBOX_NPC
	goto ShoreslateShop_Man_1


ShoreslateShop_OldMan::
# 33 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	msgbox ShoreslateShop_OldMan_Text, MSGBOX_NPC
	end


Shoreslate_BPShop_HoldItemClerk::
# 42 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	call BPShop_ItemClerk
# 43 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	bpmart Shoreslate_Items, FALSE
# 44 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	goto BPShop_ItemClerkAfter
	return


	.align 2
# 46 "data/maps/Shoreslate_BP_Shop/scripts.pory"
Shoreslate_Items:
# 47 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 48 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 49 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 50 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 51 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 52 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 53 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 54 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 55 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_NONE

Shoreslate_BPShop_MoveTutor::
# 60 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	call BPShop_MoveTutor
# 61 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	bpmart Shoreslate_MoveTutor, TRUE
# 62 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	goto BPShop_MoveTutorAfter
	return


	.align 2
# 64 "data/maps/Shoreslate_BP_Shop/scripts.pory"
Shoreslate_MoveTutor:
# 65 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte MOVE_WATER_PULSE
# 66 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte MOVE_FURY_CUTTER
# 67 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte MOVE_MAGIC_ROOM
# 68 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte MOVE_MUD_SLAP
# 69 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte MOVE_SWIFT
# 70 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte MOVE_FOUL_PLAY
# 71 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte MOVE_GUNK_SHOT
# 72 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte MOVE_TRICK
# 73 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte MOVE_ANCIENT_POWER
# 74 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte MOVE_OMINOUS_WIND
# 75 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.2byte MOVE_NONE
	.2byte ITEM_NONE

ShoreslateShop_Man_Text::
# 17 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.string "Hey, want to hear a secret?$"

ShoreslateShop_Man_TextContinued::
# 20 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.string "There are certain type of trainers who\n"
	.string "are colloquially known as\l"
	.string "“Pokémon enthusiasts.”\p"
	.string "These people absolutely love Pokémon\n"
	.string "battles and often times even demand\l"
	.string "rematches if you happen to cross their\l"
	.string "path more than once.\p"
	.string "If you ever find yourself short on\n"
	.string "Battle Points, consider challenging\l"
	.string "one of these enthusiasts.$"

ShoreslateShop_OldMan_Text::
# 36 "data/maps/Shoreslate_BP_Shop/scripts.pory"
	.string "I don't understand what half of these\n"
	.string "items even do…$"
