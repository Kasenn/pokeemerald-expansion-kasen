@ special ChooseMonForMoveTutor

Sandstone_BP_Shop_MapScripts::
	.byte 0


SandstoneShop_Man::
	msgbox SandstoneShop_Man_Text, MSGBOX_NPC
	end


SandstoneShop_Lass::
	msgbox SandstoneShop_Lass_Text, MSGBOX_NPC
	end


Sandstone_BPShop_HoldItemClerk::
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK6
	setvar VAR_TEMP_3, 6
	goto BPShop_HoldItemClerk
	return


Sandstone_BPShop_ChooseHoldItem::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR6
	call BPShop_SetupHoldItem
	switch VAR_RESULT
	case 0, Sandstone_BPShop_ChooseHoldItem_2
	case 1, Sandstone_BPShop_ChooseHoldItem_3
	case 2, Sandstone_BPShop_ChooseHoldItem_4
	case 3, Sandstone_BPShop_ChooseHoldItem_5
	case 4, Sandstone_BPShop_ChooseHoldItem_6
	case 5, Sandstone_BPShop_ChooseHoldItem_7
	case 6, Sandstone_BPShop_ChooseHoldItem_8
	case 7, Sandstone_BPShop_ChooseHoldItem_9
	case 8, Sandstone_BPShop_ChooseHoldItem_10
	case 9, Sandstone_BPShop_ChooseHoldItem_11
	case 10, Sandstone_BPShop_ChooseHoldItem_12
	case 11, Sandstone_BPShop_ChooseHoldItem_13
	case 12, Sandstone_BPShop_ChooseHoldItem_14
	case 13, Sandstone_BPShop_ChooseHoldItem_15
	case 14, Sandstone_BPShop_ChooseHoldItem_16
	case 15, Sandstone_BPShop_ChooseHoldItem_17
	case 16, Sandstone_BPShop_ChooseHoldItem_18
	case 17, Sandstone_BPShop_ChooseHoldItem_19
	case 18, Sandstone_BPShop_ChooseHoldItem_20
	case 19, Sandstone_BPShop_ChooseHoldItem_21
	case 20, Sandstone_BPShop_ChooseHoldItem_22
	case 21, Sandstone_BPShop_ChooseHoldItem_23
	case MULTI_B_PRESSED, Sandstone_BPShop_ChooseHoldItem_24
	return

Sandstone_BPShop_ChooseHoldItem_2:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_LONELY_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_3:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_ADAMANT_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_4:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_NAUGHTY_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_5:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_BRAVE_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_6:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_BOLD_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_7:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_IMPISH_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_8:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_LAX_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_9:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_RELAXED_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_10:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_MODEST_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_11:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_MILD_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_12:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_RASH_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_13:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_QUIET_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_14:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_CALM_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_15:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_GENTLE_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_16:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_CAREFUL_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_17:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_SASSY_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_18:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_TIMID_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_19:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_HASTY_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_20:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_JOLLY_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_21:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_NAIVE_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_22:
	setvar VAR_0x8008, 40
	setvar VAR_0x8009, ITEM_SERIOUS_MINT
	goto BPShop_HeldItem
	return

Sandstone_BPShop_ChooseHoldItem_23:
	call BPShop_ClerkGoodbye
	return

Sandstone_BPShop_ChooseHoldItem_24:
	call BPShop_ClerkGoodbye
	return


Sandstone_BPShop_MoveTutor::
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_7
	setvar VAR_TEMP_5, 7
	goto BPShop_MoveTutor
	return


Sandstone_BPShop_ChooseTutorMove::
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_7
	call MoveTutorSetup
	switch VAR_RESULT
	case 0, Sandstone_BPShop_ChooseTutorMove_3
	case 1, Sandstone_BPShop_ChooseTutorMove_4
	case 2, Sandstone_BPShop_ChooseTutorMove_5
	case 3, Sandstone_BPShop_ChooseTutorMove_6
	case 4, Sandstone_BPShop_ChooseTutorMove_7
	case 5, Sandstone_BPShop_ChooseTutorMove_8
	case 6, Sandstone_BPShop_ChooseTutorMove_9
	case 7, Sandstone_BPShop_ChooseTutorMove_10
	case 8, Sandstone_BPShop_ChooseTutorMove_11
	case 9, Sandstone_BPShop_ChooseTutorMove_12
	case 10, Sandstone_BPShop_ChooseTutorMove_13
	case MULTI_B_PRESSED, Sandstone_BPShop_ChooseTutorMove_14
Sandstone_BPShop_ChooseTutorMove_1:
	end

Sandstone_BPShop_ChooseTutorMove_3:
	setvar VAR_0x8008, 6
	setvar VAR_0x8005, MOVE_THUNDER_WAVE
	goto BPShop_ConfirmMoveSelection
	goto Sandstone_BPShop_ChooseTutorMove_1

Sandstone_BPShop_ChooseTutorMove_4:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto BPShop_ConfirmMoveSelection
	goto Sandstone_BPShop_ChooseTutorMove_1

Sandstone_BPShop_ChooseTutorMove_5:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto BPShop_ConfirmMoveSelection
	goto Sandstone_BPShop_ChooseTutorMove_1

Sandstone_BPShop_ChooseTutorMove_6:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto BPShop_ConfirmMoveSelection
	goto Sandstone_BPShop_ChooseTutorMove_1

Sandstone_BPShop_ChooseTutorMove_7:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_DRAIN_PUNCH
	goto BPShop_ConfirmMoveSelection
	goto Sandstone_BPShop_ChooseTutorMove_1

Sandstone_BPShop_ChooseTutorMove_8:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_PSYCH_UP
	goto BPShop_ConfirmMoveSelection
	goto Sandstone_BPShop_ChooseTutorMove_1

Sandstone_BPShop_ChooseTutorMove_9:
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_PAIN_SPLIT
	goto BPShop_ConfirmMoveSelection
	goto Sandstone_BPShop_ChooseTutorMove_1

Sandstone_BPShop_ChooseTutorMove_10:
	setvar VAR_0x8008, 10
	setvar VAR_0x8005, MOVE_TAILWIND
	goto BPShop_ConfirmMoveSelection
	goto Sandstone_BPShop_ChooseTutorMove_1

Sandstone_BPShop_ChooseTutorMove_11:
	setvar VAR_0x8008, 14
	setvar VAR_0x8005, MOVE_IRON_TAIL
	goto BPShop_ConfirmMoveSelection
	goto Sandstone_BPShop_ChooseTutorMove_1

Sandstone_BPShop_ChooseTutorMove_12:
	setvar VAR_0x8008, 16
	setvar VAR_0x8005, MOVE_ENDEAVOR
	goto BPShop_ConfirmMoveSelection
	goto Sandstone_BPShop_ChooseTutorMove_1

Sandstone_BPShop_ChooseTutorMove_13:
	call BPShop_ExitTutorMoveSelect
	goto Sandstone_BPShop_ChooseTutorMove_1

Sandstone_BPShop_ChooseTutorMove_14:
	call BPShop_ExitTutorMoveSelect
	goto Sandstone_BPShop_ChooseTutorMove_1


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

Sandstone_BPShop_LonelyMintDesc::
	.string "Can be smelled. It ups Attack, but\n"
	.string "reduces Defense.$"

Sandstone_BPShop_AdamantMintDesc::
	.string "Can be smelled. It ups Attack, but\n"
	.string "reduces Sp. Atk.$"

Sandstone_BPShop_NaughtyMintDesc::
	.string "Can be smelled. It ups Attack, but\n"
	.string "reduces Sp. Def.$"

Sandstone_BPShop_BraveMintDesc::
	.string "Can be smelled. It ups Attack, but\n"
	.string "reduces Speed.$"

Sandstone_BPShop_BoldMintDesc::
	.string "Can be smelled. It ups Defense,\n"
	.string "but reduces Attack.$"

Sandstone_BPShop_ImpishMintDesc::
	.string "Can be smelled. It ups Defense,\n"
	.string "but reduces Sp. Atk.$"

Sandstone_BPShop_LaxMintDesc::
	.string "Can be smelled. It ups Defense,\n"
	.string "but reduces Sp. Def.$"

Sandstone_BPShop_RelaxedMintDesc::
	.string "Can be smelled. It ups Defense,\n"
	.string "but reduces Speed.$"

Sandstone_BPShop_ModestMintDesc::
	.string "Can be smelled. It ups Sp. Atk,\n"
	.string "but reduces Attack.$"

Sandstone_BPShop_MildMintDesc::
	.string "Can be smelled. It ups Sp. Atk,\n"
	.string "but reduces Defense.$"

Sandstone_BPShop_RashMintDesc::
	.string "Can be smelled. It ups Sp. Atk,\n"
	.string "but reduces Sp. Def.$"

Sandstone_BPShop_QuietMintDesc::
	.string "Can be smelled. It ups Sp. Atk,\n"
	.string "but reduces Speed.$"

Sandstone_BPShop_CalmMintDesc::
	.string "Can be smelled. It ups Sp. Def,\n"
	.string "but reduces Attack.$"

Sandstone_BPShop_GentleMintDesc::
	.string "Can be smelled. It ups Sp. Def,\n"
	.string "but reduces Defense.$"

Sandstone_BPShop_CarefulMintDesc::
	.string "Can be smelled. It ups Sp. Def,\n"
	.string "but reduces Sp. Atk.$"

Sandstone_BPShop_SassyMintDesc::
	.string "Can be smelled. It ups Sp. Def,\n"
	.string "but reduces Speed.$"

Sandstone_BPShop_TimidMintDesc::
	.string "Can be smelled. It ups Speed,\n"
	.string "but reduces Attack.$"

Sandstone_BPShop_HastyMintDesc::
	.string "Can be smelled. It ups Speed,\n"
	.string "but reduces Defense.$"

Sandstone_BPShop_JollyMintDesc::
	.string "Can be smelled. It ups Speed,\n"
	.string "but reduces Sp. Atk.$"

Sandstone_BPShop_NaiveMintDesc::
	.string "Can be smelled. It ups Speed,\n"
	.string "but reduces Sp. Def.$"

Sandstone_BPShop_SeriousMintDesc::
	.string "Can be smelled. It makes each,\n"
	.string "stat grow equally.$"

Sandstone_BPShop_Text_ThunderWaveDesc::
	.string "A weak jolt of\n"
	.string "electricity that\n"
	.string "paralyzes the foe.$"

Sandstone_BPShop_Text_FirePunchDesc::
	.string "A fiery punch\n"
	.string "that may burn\n"
	.string "the foe.$"

Sandstone_BPShop_Text_ThunderPunchDesc::
	.string "An electrified\n"
	.string "punch that may\n"
	.string "paralyze the foe.$"

Sandstone_BPShop_Text_IcePunchDesc::
	.string "An icy punch\n"
	.string "that may freeze\n"
	.string "the foe.$"

Sandstone_BPShop_Text_DrainPunchDesc::
	.string "An attack that\n"
	.string "absorbs half the\n"
	.string "damage inflicted.$"

Sandstone_BPShop_Text_PsychUpDesc::
	.string "Copies the foe's\n"
	.string "effect(s) and\n"
	.string "gives to the user.$"

Sandstone_BPShop_Text_PainSplitDesc::
	.string "Adds the user and\n"
	.string "foe's HP, then\n"
	.string "splits them.$"

Sandstone_BPShop_Text_TailwindDesc::
	.string "Whips up a\n"
	.string "turbulent breeze\n"
	.string "that raises Speed.$"

Sandstone_BPShop_Text_IronTailDesc::
	.string "Attacks with a\n"
	.string "rock-hard tail.\n"
	.string "May lower Defense.$"

Sandstone_BPShop_Text_EndeavorDesc::
	.string "Gains power if the\n"
	.string "user's HP is lower\n"
	.string "than the foe's HP.$"
