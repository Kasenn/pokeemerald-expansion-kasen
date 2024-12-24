CheckSafeMovement::
	getfollowerxy VAR_TEMP_0, VAR_TEMP_1
	buffernumberstring STR_VAR_1, VAR_TEMP_0
	buffernumberstring STR_VAR_2, VAR_TEMP_1
	msgbox CheckSafeMovement_Text_0
	release
	return


ChooseSpellRange::
	lock
	message ChooseRange_Text
	waitmessage
	dynmultipush ChooseSpellRange_Text_0, 0
	dynmultipush ChooseSpellRange_Text_1, 1
	dynmultipush ChooseSpellRange_Text_2, 2
	dynmultistack 23, 6, FALSE, 5, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, ChooseSpellRange_3
	case 1, ChooseSpellRange_4
	case 2, ChooseSpellRange_5
	case MULTI_B_PRESSED, ChooseSpellRange_6
ChooseSpellRange_1:
	release
	return

ChooseSpellRange_3:
	msgbox ChooseSpellRange_Text_3
	setvar VAR_TEMP_A, 1
	goto ChooseSpellRange_1

ChooseSpellRange_4:
	msgbox ChooseSpellRange_Text_4
	setvar VAR_TEMP_A, 2
	goto ChooseSpellRange_1

ChooseSpellRange_5:
	msgbox ChooseSpellRange_Text_5
	setvar VAR_TEMP_A, 0
	goto ChooseSpellRange_1

ChooseSpellRange_6:
	closemessage
	goto ChooseSpellRange_1


ChooseSpellType::
	goto_if_unset FLAG_SYS_ARENA_GOLD, ChooseSpellType_2
ChooseSpellType_1:
	message SpellType
	waitmessage
	dynmultipush ChooseSpellType_Text_0, 0
	dynmultipush ChooseSpellType_Text_1, 1
	dynmultistack 23, 8, FALSE, 5, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, ChooseSpellType_6
	case 1, ChooseSpellType_7
	case MULTI_B_PRESSED, ChooseSpellType_8
ChooseSpellType_4:
	closemessage
	special ShowSecretBaseDecorationMenu
	waitstate
	return

ChooseSpellType_2:
	setflag FLAG_SYS_ARENA_GOLD
	adddecoration DECOR_PRETTY_DESK
	adddecoration DECOR_SMALL_CHAIR
	adddecoration DECOR_COLORFUL_PLANT
	adddecoration DECOR_GLITTER_MAT
	adddecoration DECOR_JUMP_MAT
	adddecoration DECOR_SPIN_MAT
	goto ChooseSpellType_1

ChooseSpellType_6:
	msgbox ChooseSpellType_Text_2
	compare VAR_TEMP_A, 0
	goto_if_eq ChooseSpellType_10
ChooseSpellType_9:
	compare VAR_TEMP_A, 1
	goto_if_eq ChooseSpellType_16
ChooseSpellType_15:
	compare VAR_TEMP_A, 2
	goto_if_eq ChooseSpellType_21
	goto ChooseSpellType_4

ChooseSpellType_7:
	msgbox ChooseSpellType_Text_3
	compare VAR_TEMP_A, 1
	goto_if_eq ChooseSpellType_13
ChooseSpellType_12:
	compare VAR_TEMP_A, 2
	goto_if_eq ChooseSpellType_19
ChooseSpellType_18:
	compare VAR_TEMP_A, 0
	goto_if_eq ChooseSpellType_23
	goto ChooseSpellType_4

ChooseSpellType_8:
	release
	end

ChooseSpellType_10:
	setvar VAR_TEMP_B, 0
	goto ChooseSpellType_9

ChooseSpellType_13:
	setvar VAR_TEMP_B, 3
	goto ChooseSpellType_12

ChooseSpellType_16:
	setvar VAR_TEMP_B, 1
	goto ChooseSpellType_15

ChooseSpellType_19:
	setvar VAR_TEMP_B, 4
	goto ChooseSpellType_18

ChooseSpellType_21:
	setvar VAR_TEMP_B, 2
	goto ChooseSpellType_4

ChooseSpellType_23:
	setvar VAR_TEMP_B, 5
	goto ChooseSpellType_4


CheckSafeMovement_Text_0:
	.string "X: {STR_VAR_1}\nY: {STR_VAR_2}$"

ChooseSpellRange_Text_0:
	.string "1x1$"

ChooseSpellRange_Text_1:
	.string "2x2$"

ChooseSpellRange_Text_2:
	.string "3x3$"

ChooseSpellRange_Text_3:
	.string "Spell set to 1x1.$"

ChooseSpellRange_Text_4:
	.string "Spell set to 2x2.$"

ChooseSpellRange_Text_5:
	.string "Spell set to 3x3.$"

ChooseSpellType_Text_0:
	.string "Create$"

ChooseSpellType_Text_1:
	.string "Destroy$"

ChooseSpellType_Text_2:
	.string "Spell set to create.$"

ChooseSpellType_Text_3:
	.string "Spell set to destroy.$"

ChooseRange_Text::
	.string "Choose spell range.$"

SpellType::
	.string "Choose spell type.$"
