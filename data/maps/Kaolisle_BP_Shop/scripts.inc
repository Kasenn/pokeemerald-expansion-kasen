Kaolisle_BP_Shop_MapScripts::
	.byte 0


KaolisleShop_Man::
	faceplayer
	lockall
	msgbox KaolisleShop_Man_Text, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq KaolisleShop_Man_2
KaolisleShop_Man_1:
	waitmessage
	closemessage
	release
	end

KaolisleShop_Man_2:
	msgbox KaolisleShop_Man_TextContinued, MSGBOX_NPC
	goto KaolisleShop_Man_1


KaolisleShop_OldMan::
	msgbox KaolisleShop_OldMan_Text, MSGBOX_NPC
	end


Kaolisle_BPShop_HoldItemClerk::
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK5
	setvar VAR_TEMP_3, 5
	goto BPShop_HoldItemClerk
	return


Kaolisle_BPShop_ChooseHoldItem::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR5
	call BPShop_SetupHoldItem
	switch VAR_RESULT
	case 0, Kaolisle_BPShop_ChooseHoldItem_2
	case 1, Kaolisle_BPShop_ChooseHoldItem_3
	case 2, Kaolisle_BPShop_ChooseHoldItem_4
	case 3, Kaolisle_BPShop_ChooseHoldItem_5
	case 4, Kaolisle_BPShop_ChooseHoldItem_6
	case 5, Kaolisle_BPShop_ChooseHoldItem_7
	case 6, Kaolisle_BPShop_ChooseHoldItem_8
	case 7, Kaolisle_BPShop_ChooseHoldItem_9
	case 8, Kaolisle_BPShop_ChooseHoldItem_10
	case MULTI_B_PRESSED, Kaolisle_BPShop_ChooseHoldItem_11
	return

Kaolisle_BPShop_ChooseHoldItem_2:
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_POWER_BRACER
	goto BPShop_HeldItem
	return

Kaolisle_BPShop_ChooseHoldItem_3:
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_POWER_BELT
	goto BPShop_HeldItem
	return

Kaolisle_BPShop_ChooseHoldItem_4:
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_POWER_LENS
	goto BPShop_HeldItem
	return

Kaolisle_BPShop_ChooseHoldItem_5:
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_POWER_BAND
	goto BPShop_HeldItem
	return

Kaolisle_BPShop_ChooseHoldItem_6:
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_POWER_ANKLET
	goto BPShop_HeldItem
	return

Kaolisle_BPShop_ChooseHoldItem_7:
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_POWER_WEIGHT
	goto BPShop_HeldItem
	return

Kaolisle_BPShop_ChooseHoldItem_8:
	setvar VAR_0x8008, 32
	setvar VAR_0x8009, ITEM_DESTINY_KNOT
	goto BPShop_HeldItem
	return

Kaolisle_BPShop_ChooseHoldItem_9:
	setvar VAR_0x8008, 32
	setvar VAR_0x8009, ITEM_EVERSTONE
	goto BPShop_HeldItem
	return

Kaolisle_BPShop_ChooseHoldItem_10:
	call BPShop_ClerkGoodbye
	return

Kaolisle_BPShop_ChooseHoldItem_11:
	call BPShop_ClerkGoodbye
	return


Kaolisle_BPShop_MoveTutor::
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_6
	setvar VAR_TEMP_5, 6
	goto BPShop_MoveTutor
	return


Kaolisle_BPShop_ChooseTutorMove::
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_6
	call MoveTutorSetup
	switch VAR_RESULT
	case 0, Kaolisle_BPShop_ChooseTutorMove_3
	case 1, Kaolisle_BPShop_ChooseTutorMove_4
	case 2, Kaolisle_BPShop_ChooseTutorMove_5
	case 3, Kaolisle_BPShop_ChooseTutorMove_6
	case 4, Kaolisle_BPShop_ChooseTutorMove_7
	case 5, Kaolisle_BPShop_ChooseTutorMove_8
	case 6, Kaolisle_BPShop_ChooseTutorMove_9
	case 7, Kaolisle_BPShop_ChooseTutorMove_10
	case 8, Kaolisle_BPShop_ChooseTutorMove_11
	case 9, Kaolisle_BPShop_ChooseTutorMove_12
	case 10, Kaolisle_BPShop_ChooseTutorMove_13
	case MULTI_B_PRESSED, Kaolisle_BPShop_ChooseTutorMove_14
Kaolisle_BPShop_ChooseTutorMove_1:
	end

Kaolisle_BPShop_ChooseTutorMove_3:
	setvar VAR_0x8008, 4
	setvar VAR_0x8005, MOVE_COVET
	goto BPShop_ConfirmMoveSelection
	goto Kaolisle_BPShop_ChooseTutorMove_1

Kaolisle_BPShop_ChooseTutorMove_4:
	setvar VAR_0x8008, 4
	setvar VAR_0x8005, MOVE_STRING_SHOT
	goto BPShop_ConfirmMoveSelection
	goto Kaolisle_BPShop_ChooseTutorMove_1

Kaolisle_BPShop_ChooseTutorMove_5:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_BLOCK
	goto BPShop_ConfirmMoveSelection
	goto Kaolisle_BPShop_ChooseTutorMove_1

Kaolisle_BPShop_ChooseTutorMove_6:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_SNATCH
	goto BPShop_ConfirmMoveSelection
	goto Kaolisle_BPShop_ChooseTutorMove_1

Kaolisle_BPShop_ChooseTutorMove_7:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_UPROAR
	goto BPShop_ConfirmMoveSelection
	goto Kaolisle_BPShop_ChooseTutorMove_1

Kaolisle_BPShop_ChooseTutorMove_8:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_WORRY_SEED
	goto BPShop_ConfirmMoveSelection
	goto Kaolisle_BPShop_ChooseTutorMove_1

Kaolisle_BPShop_ChooseTutorMove_9:
	setvar VAR_0x8008, 10
	setvar VAR_0x8005, MOVE_STEALTH_ROCK
	goto BPShop_ConfirmMoveSelection
	goto Kaolisle_BPShop_ChooseTutorMove_1

Kaolisle_BPShop_ChooseTutorMove_10:
	setvar VAR_0x8008, 10
	setvar VAR_0x8005, MOVE_SYNTHESIS
	goto BPShop_ConfirmMoveSelection
	goto Kaolisle_BPShop_ChooseTutorMove_1

Kaolisle_BPShop_ChooseTutorMove_11:
	setvar VAR_0x8008, 10
	setvar VAR_0x8005, MOVE_ZEN_HEADBUTT
	goto BPShop_ConfirmMoveSelection
	goto Kaolisle_BPShop_ChooseTutorMove_1

Kaolisle_BPShop_ChooseTutorMove_12:
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_LAST_RESORT
	goto BPShop_ConfirmMoveSelection
	goto Kaolisle_BPShop_ChooseTutorMove_1

Kaolisle_BPShop_ChooseTutorMove_13:
	call BPShop_ExitTutorMoveSelect
	goto Kaolisle_BPShop_ChooseTutorMove_1

Kaolisle_BPShop_ChooseTutorMove_14:
	call BPShop_ExitTutorMoveSelect
	goto Kaolisle_BPShop_ChooseTutorMove_1


KaolisleShop_Man_Text::
	.string "Hey, want to hear a secret?$"

KaolisleShop_Man_TextContinued::
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

KaolisleShop_OldMan_Text::
	.string "I don't understand what half of these\n"
	.string "items even do…$"

Kaolisle_BPShop_PowerBracerDesc::
	.string "Hold item that promotes Atk gain,\n"
	.string "but reduces Speed.$"

Kaolisle_BPShop_PowerBeltDesc::
	.string "Hold item that promotes Def gain,\n"
	.string "but reduces Speed.$"

Kaolisle_BPShop_PowerLensDesc::
	.string "Hold item that promotes Sp. Atk gain,\n"
	.string "but reduces Speed.$"

Kaolisle_BPShop_PowerBandDesc::
	.string "Hold item that promotes Sp. Def gain,\n"
	.string "but reduces Speed.$"

Kaolisle_BPShop_PowerAnkletDesc::
	.string "Hold item that promotes Spd gain,\n"
	.string "but reduces Speed.$"

Kaolisle_BPShop_PowerWeightDesc::
	.string "A hold item that promotes HP gain,\n"
	.string "but reduces Speed.$"

Kaolisle_BPShop_DestinyKnotDesc::
	.string "If the holder falls in love, the foe\n"
	.string "does too.$"

Kaolisle_BPShop_EverstoneDesc::
	.string "A wondrous hold item that prevents\n"
	.string "evolution.$"

Kaolisle_BPShop_Text_CovetDesc::
	.string "Steals the\n"
	.string "target's held\n"
	.string "item.$"

Kaolisle_BPShop_Text_StringShotDesc::
	.string "Binds the foe\n"
	.string "with string to\n"
	.string "reduce its Speed.$"

Kaolisle_BPShop_Text_BlockDesc::
	.string "Prevents the\n"
	.string "target from\n"
	.string "escaping.$"

Kaolisle_BPShop_Text_WorrySeedDesc::
	.string "Makes the\n"
	.string "target's ability\n"
	.string "Insomnia.$"

Kaolisle_BPShop_Text_UproarDesc::
	.string "3-turn attack.\n"
	.string "No Pokémon can\n"
	.string "sleep during it.$"

Kaolisle_BPShop_Text_SnatchDesc::
	.string "Steals the effect\n"
	.string "of most beneficial\n"
	.string "status moves.$"

Kaolisle_BPShop_Text_StealthRockDesc::
	.string "Sets floating\n"
	.string "stones that hurt\n"
	.string "a foe switching in.$"

Kaolisle_BPShop_Text_SynthesisDesc::
	.string "Restores HP.\n"
	.string "The amount varies\n"
	.string "with the weather.$"

Kaolisle_BPShop_Text_ZenHeadbuttDesc::
	.string "A strong head-\n"
	.string "butt that may\n"
	.string "cause flinching.$"

Kaolisle_BPShop_Text_LastResortDesc::
	.string "Only usable after\n"
	.string "using all other\n"
	.string "moves in combat.$"
