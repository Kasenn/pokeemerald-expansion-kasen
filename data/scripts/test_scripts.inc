CheckSafeMovement::
# 82 "data/scripts/test_scripts.pory"
	getfollowerxy VAR_TEMP_0, VAR_TEMP_1
# 83 "data/scripts/test_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 84 "data/scripts/test_scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_1
# 85 "data/scripts/test_scripts.pory"
	msgbox CheckSafeMovement_Text_0
# 86 "data/scripts/test_scripts.pory"
	release
	return


ChooseSpellRange::
# 90 "data/scripts/test_scripts.pory"
	lockall
# 91 "data/scripts/test_scripts.pory"
	message ChooseRange_Text
# 92 "data/scripts/test_scripts.pory"
	waitmessage
# 93 "data/scripts/test_scripts.pory"
	dynmultipush ChooseSpellRange_Text_0, 0
# 94 "data/scripts/test_scripts.pory"
	dynmultipush ChooseSpellRange_Text_1, 1
# 95 "data/scripts/test_scripts.pory"
	dynmultipush ChooseSpellRange_Text_2, 2
# 96 "data/scripts/test_scripts.pory"
	dynmultistack 23, 6, FALSE, 5, FALSE, 0, NULL
# 97 "data/scripts/test_scripts.pory"
	switch VAR_RESULT
# 98 "data/scripts/test_scripts.pory"
	case 0, ChooseSpellRange_3
# 101 "data/scripts/test_scripts.pory"
	case 1, ChooseSpellRange_4
# 104 "data/scripts/test_scripts.pory"
	case 2, ChooseSpellRange_5
# 107 "data/scripts/test_scripts.pory"
	case MULTI_B_PRESSED, ChooseSpellRange_6
ChooseSpellRange_1:
# 110 "data/scripts/test_scripts.pory"
	release
	return

ChooseSpellRange_3:
# 99 "data/scripts/test_scripts.pory"
	msgbox ChooseSpellRange_Text_3
# 100 "data/scripts/test_scripts.pory"
	setvar VAR_TEMP_A, 1
	goto ChooseSpellRange_1

ChooseSpellRange_4:
# 102 "data/scripts/test_scripts.pory"
	msgbox ChooseSpellRange_Text_4
# 103 "data/scripts/test_scripts.pory"
	setvar VAR_TEMP_A, 2
	goto ChooseSpellRange_1

ChooseSpellRange_5:
# 105 "data/scripts/test_scripts.pory"
	msgbox ChooseSpellRange_Text_5
# 106 "data/scripts/test_scripts.pory"
	setvar VAR_TEMP_A, 0
	goto ChooseSpellRange_1

ChooseSpellRange_6:
# 108 "data/scripts/test_scripts.pory"
	closemessage
	goto ChooseSpellRange_1


ChooseSpellType::
# 116 "data/scripts/test_scripts.pory"
	goto_if_unset FLAG_SYS_ARENA_GOLD, ChooseSpellType_2
ChooseSpellType_1:
# 131 "data/scripts/test_scripts.pory"
	message SpellType
# 132 "data/scripts/test_scripts.pory"
	waitmessage
# 133 "data/scripts/test_scripts.pory"
	dynmultipush ChooseSpellType_Text_0, 0
# 134 "data/scripts/test_scripts.pory"
	dynmultipush ChooseSpellType_Text_1, 1
# 135 "data/scripts/test_scripts.pory"
	dynmultistack 23, 8, FALSE, 5, FALSE, 0, NULL
# 136 "data/scripts/test_scripts.pory"
	switch VAR_RESULT
# 137 "data/scripts/test_scripts.pory"
	case 0, ChooseSpellType_6
# 148 "data/scripts/test_scripts.pory"
	case 1, ChooseSpellType_7
# 159 "data/scripts/test_scripts.pory"
	case MULTI_B_PRESSED, ChooseSpellType_8
ChooseSpellType_4:
# 163 "data/scripts/test_scripts.pory"
	closemessage
# 164 "data/scripts/test_scripts.pory"
	special ShowSecretBaseDecorationMenu
# 165 "data/scripts/test_scripts.pory"
	waitstate
	return

ChooseSpellType_2:
# 117 "data/scripts/test_scripts.pory"
	setflag FLAG_SYS_ARENA_GOLD
# 118 "data/scripts/test_scripts.pory"
	adddecoration DECOR_PRETTY_DESK
# 119 "data/scripts/test_scripts.pory"
	adddecoration DECOR_SMALL_CHAIR
# 120 "data/scripts/test_scripts.pory"
	adddecoration DECOR_COLORFUL_PLANT
# 121 "data/scripts/test_scripts.pory"
	adddecoration DECOR_GLITTER_MAT
# 122 "data/scripts/test_scripts.pory"
	adddecoration DECOR_JUMP_MAT
# 123 "data/scripts/test_scripts.pory"
	adddecoration DECOR_SPIN_MAT
	goto ChooseSpellType_1

ChooseSpellType_6:
# 138 "data/scripts/test_scripts.pory"
	msgbox ChooseSpellType_Text_2
# 139 "data/scripts/test_scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq ChooseSpellType_10
ChooseSpellType_9:
# 142 "data/scripts/test_scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq ChooseSpellType_16
ChooseSpellType_15:
# 145 "data/scripts/test_scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_eq ChooseSpellType_21
	goto ChooseSpellType_4

ChooseSpellType_7:
# 149 "data/scripts/test_scripts.pory"
	msgbox ChooseSpellType_Text_3
# 150 "data/scripts/test_scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq ChooseSpellType_13
ChooseSpellType_12:
# 153 "data/scripts/test_scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_eq ChooseSpellType_19
ChooseSpellType_18:
# 156 "data/scripts/test_scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq ChooseSpellType_23
	goto ChooseSpellType_4

ChooseSpellType_8:
# 160 "data/scripts/test_scripts.pory"
	release
	end

ChooseSpellType_10:
# 140 "data/scripts/test_scripts.pory"
	setvar VAR_TEMP_B, 0
	goto ChooseSpellType_9

ChooseSpellType_13:
# 151 "data/scripts/test_scripts.pory"
	setvar VAR_TEMP_B, 3
	goto ChooseSpellType_12

ChooseSpellType_16:
# 143 "data/scripts/test_scripts.pory"
	setvar VAR_TEMP_B, 1
	goto ChooseSpellType_15

ChooseSpellType_19:
# 154 "data/scripts/test_scripts.pory"
	setvar VAR_TEMP_B, 4
	goto ChooseSpellType_18

ChooseSpellType_21:
# 146 "data/scripts/test_scripts.pory"
	setvar VAR_TEMP_B, 2
	goto ChooseSpellType_4

ChooseSpellType_23:
# 157 "data/scripts/test_scripts.pory"
	setvar VAR_TEMP_B, 5
	goto ChooseSpellType_4


CheckSafeMovement_Text_0:
# 85 "data/scripts/test_scripts.pory"
	.string "X: {STR_VAR_1}\nY: {STR_VAR_2}$"

ChooseSpellRange_Text_0:
# 93 "data/scripts/test_scripts.pory"
	.string "1x1$"

ChooseSpellRange_Text_1:
# 94 "data/scripts/test_scripts.pory"
	.string "2x2$"

ChooseSpellRange_Text_2:
# 95 "data/scripts/test_scripts.pory"
	.string "3x3$"

ChooseSpellRange_Text_3:
# 99 "data/scripts/test_scripts.pory"
	.string "Spell set to 1x1.$"

ChooseSpellRange_Text_4:
# 102 "data/scripts/test_scripts.pory"
	.string "Spell set to 2x2.$"

ChooseSpellRange_Text_5:
# 105 "data/scripts/test_scripts.pory"
	.string "Spell set to 3x3.$"

ChooseSpellType_Text_0:
# 133 "data/scripts/test_scripts.pory"
	.string "Create$"

ChooseSpellType_Text_1:
# 134 "data/scripts/test_scripts.pory"
	.string "Destroy$"

ChooseSpellType_Text_2:
# 138 "data/scripts/test_scripts.pory"
	.string "Spell set to create.$"

ChooseSpellType_Text_3:
# 149 "data/scripts/test_scripts.pory"
	.string "Spell set to destroy.$"

ChooseRange_Text::
# 112 "data/scripts/test_scripts.pory"
	.string "Choose spell range.$"

SpellType::
# 167 "data/scripts/test_scripts.pory"
	.string "Choose spell type.$"
