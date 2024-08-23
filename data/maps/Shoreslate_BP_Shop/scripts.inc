@hasMoveTutor

Shoreslate_BP_Shop_MapScripts::
	.byte 0


ShoreslateShop_Man::
	faceplayer
	lockall
	msgbox ShoreslateShop_Man_Text, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq ShoreslateShop_Man_2
ShoreslateShop_Man_1:
	waitmessage
	closemessage
	release
	end

ShoreslateShop_Man_2:
	msgbox ShoreslateShop_Man_TextContinued, MSGBOX_NPC
	goto ShoreslateShop_Man_1


ShoreslateShop_OldMan::
	msgbox ShoreslateShop_OldMan_Text, MSGBOX_NPC
	end


Shoreslate_BPShop_HoldItemClerk::
	call BPShop_ItemClerk
	bpmart Shoreslate_Items, FALSE
	goto BPShop_ItemClerkAfter
	return


	.align 2
Shoreslate_Items:
	.2byte ITEM_BRIGHT_POWDER
	.2byte ITEM_QUICK_CLAW
	.2byte ITEM_SOOTHE_BELL
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_SHELL_BELL
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_NONE

Shoreslate_BPShop_MoveTutor::
	call BPShop_MoveTutor
	bpmart Shoreslate_MoveTutor, TRUE
	goto BPShop_MoveTutorAfter
	return


	.align 2
Shoreslate_MoveTutor:
	.2byte MOVE_WATER_PULSE
	.2byte MOVE_FURY_CUTTER
	.2byte MOVE_MAGIC_ROOM
	.2byte MOVE_MUD_SLAP
	.2byte MOVE_SWIFT
	.2byte MOVE_FOUL_PLAY
	.2byte MOVE_GUNK_SHOT
	.2byte MOVE_TRICK
	.2byte MOVE_ANCIENT_POWER
	.2byte MOVE_OMINOUS_WIND
	.2byte MOVE_NONE
	.2byte ITEM_NONE

ShoreslateShop_Man_Text::
	.string "Hey, want to hear a secret?$"

ShoreslateShop_Man_TextContinued::
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
	.string "I don't understand what half of these\n"
	.string "items even do…$"
