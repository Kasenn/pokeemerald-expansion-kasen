Sandstone_SmallHouse1_MapScripts::
	.byte 0


Sandstone_SmallHouse_Woman::
# 4 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox Sandstone_SmallHouse_Woman_Text, MSGBOX_NPC
	end


Sandstone_SmallHouse_Child::
# 8 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto_if_set FLAG_SANDSTONE_BALLOON, Sandstone_SmallHouse_Child_2
# 12 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	lock
# 13 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	faceplayer
# 14 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox Sandstone_SmallHouse_Child_TakeThis, MSGBOX_DEFAULT
	checkitemspace ITEM_AIR_BALLOON
# 0 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Sandstone_SmallHouse_Child_5
Sandstone_SmallHouse_Child_4:
# 18 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	giveitem ITEM_AIR_BALLOON
# 19 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	waitfanfare
# 20 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
# 21 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setflag FLAG_SANDSTONE_BALLOON
# 22 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	release
	end

Sandstone_SmallHouse_Child_2:
# 9 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox DontLetItPop, MSGBOX_NPC
	end

Sandstone_SmallHouse_Child_5:
# 16 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto ZeBagIsFull
	goto Sandstone_SmallHouse_Child_4


Sandstone_SmallHouse_Man1::
# 40 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox Sandstone_SmallHouse_Man1_Text, MSGBOX_NPC
	end


Sandstone_SmallHouse_Woman1::
# 44 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox Sandstone_SmallHouse_Woman1_Text, MSGBOX_NPC
	end


Sandstone_SmallHouse_OldMan::
# 61 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox Sandstone_SmallHouse_OldMan_Text, MSGBOX_NPC
	end


Sandstone_SmallHouse_FisherWoman::
# 74 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto_if_set FLAG_RECEIVED_GOOD_ROD, Sandstone_SmallHouse_FisherWoman_2
# 78 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	lock
# 79 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	faceplayer
# 80 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	checkitem ITEM_LURE
# 81 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Sandstone_SmallHouse_FisherWoman_5
Sandstone_SmallHouse_FisherWoman_4:
# 85 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto_if_set FLAG_QUEST_FOR_GOOD_ROD, Sandstone_SmallHouse_FisherWoman_7
	return

Sandstone_SmallHouse_FisherWoman_2:
# 75 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox HowIsClancy, MSGBOX_NPC
	end

Sandstone_SmallHouse_FisherWoman_5:
# 82 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox Sandstone_LookingForFisher, MSGBOX_DEFAULT
# 83 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
	goto Sandstone_SmallHouse_FisherWoman_4

Sandstone_SmallHouse_FisherWoman_7:
# 86 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	checkitem ITEM_LURE
# 87 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Sandstone_SmallHouse_FisherWoman_10
# 91 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	playse SE_PIN
# 92 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	safefollow
# 93 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 94 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	waitmovement 0
# 95 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	delay 30
# 96 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox YouMetClancy, MSGBOX_DEFAULT
# 97 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	giveitem ITEM_LURE
# 98 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	waitfanfare
# 99 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox TakeToClancy, MSGBOX_NPC
	end

Sandstone_SmallHouse_FisherWoman_10:
# 88 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox TakeToClancy, MSGBOX_NPC
	end


WardrobeLeft::
# 130 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	call WardrobeMain
# 131 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	opendoor 5, 2
# 132 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	call WardrobeDoor
# 133 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closedoor 5, 2
# 134 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	waitdooranim
# 135 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	warpsilent MAP_LILYCOVE_CITY_DEPARTMENT_STORE_5F, 5, 2
# 136 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	waitstate
	end


WardrobeRight::
# 140 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	call WardrobeMain
# 141 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	opendoor 7, 2
# 142 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	call WardrobeDoor
# 143 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closedoor 7, 2
# 144 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	waitdooranim
# 145 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	warpsilent MAP_LILYCOVE_CITY_DEPARTMENT_STORE_5F, 7, 2
# 146 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	waitstate
	end


WardrobeMain::
# 151 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	lock
# 152 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox ChangeOutfit, MSGBOX_YESNO
# 153 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq WardrobeMain_2
# 158 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
# 159 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	message WardrobeMain_Text_0
# 160 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	waitmessage
	checkplayergender
# 0 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WardrobeMain_5
# 193 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultipush WardrobeMain_Text_1, SPECIES_MAY_RUBY
# 194 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultipush WardrobeMain_Text_2, SPECIES_MAY_EMERALD
# 195 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto_if_set FLAG_PURCHASED_OUTFIT, WardrobeMain_12
WardrobeMain_11:
# 198 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto_if_set FLAG_OBTAIN_CONTEST_OUTFIT, WardrobeMain_18
WardrobeMain_17:
# 201 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultipush WardrobeMain_Text_5, SPECIES_EMPTY
# 202 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultistack 23, 0, FALSE, 5, FALSE, 98, DYN_MULTICHOICE_CB_SHOW_MON
# 203 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	switch VAR_RESULT
# 204 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_MAY_RUBY, WardrobeMain_27
# 207 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_MAY_EMERALD, WardrobeMain_28
# 210 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_MAY_ORAS, WardrobeMain_29
# 213 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_MAY_CONTEST, WardrobeMain_30
# 216 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case MULTI_B_PRESSED, WardrobeMain_31
# 217 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_EMPTY, WardrobeMain_31
WardrobeMain_4:
	return

WardrobeMain_2:
# 154 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
# 155 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	release
	end

WardrobeMain_5:
# 162 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultipush WardrobeMain_Text_1, SPECIES_BRENDAN_RUBY
# 163 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultipush WardrobeMain_Text_2, SPECIES_BRENDAN_EMERALD
# 164 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto_if_set FLAG_PURCHASED_OUTFIT, WardrobeMain_9
WardrobeMain_8:
# 167 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto_if_set FLAG_OBTAIN_CONTEST_OUTFIT, WardrobeMain_15
WardrobeMain_14:
# 170 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultipush WardrobeMain_Text_5, SPECIES_EMPTY
# 171 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultistack 23, 0, FALSE, 5, FALSE, 98, DYN_MULTICHOICE_CB_SHOW_MON
# 172 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	switch VAR_RESULT
# 173 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_BRENDAN_RUBY, WardrobeMain_21
# 176 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_BRENDAN_EMERALD, WardrobeMain_22
# 179 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_BRENDAN_ORAS, WardrobeMain_23
# 182 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_BRENDAN_CONTEST, WardrobeMain_24
# 185 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case MULTI_B_PRESSED, WardrobeMain_25
# 186 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_EMPTY, WardrobeMain_25
	goto WardrobeMain_4

WardrobeMain_9:
# 165 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultipush WardrobeMain_Text_3, SPECIES_BRENDAN_ORAS
	goto WardrobeMain_8

WardrobeMain_12:
# 196 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultipush WardrobeMain_Text_3, SPECIES_MAY_ORAS
	goto WardrobeMain_11

WardrobeMain_15:
# 168 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultipush WardrobeMain_Text_4, SPECIES_BRENDAN_CONTEST
	goto WardrobeMain_14

WardrobeMain_18:
# 199 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultipush WardrobeMain_Text_4, SPECIES_MAY_CONTEST
	goto WardrobeMain_17

WardrobeMain_21:
# 174 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 0
# 175 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
	goto WardrobeMain_4

WardrobeMain_22:
# 177 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 1
# 178 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
	goto WardrobeMain_4

WardrobeMain_23:
# 180 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 2
# 181 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
	goto WardrobeMain_4

WardrobeMain_24:
# 183 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 3
# 184 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
	goto WardrobeMain_4

WardrobeMain_25:
# 187 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
# 188 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	release
	end

WardrobeMain_27:
# 205 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 0
# 206 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
	goto WardrobeMain_4

WardrobeMain_28:
# 208 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 1
# 209 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
	goto WardrobeMain_4

WardrobeMain_29:
# 211 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 2
# 212 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
	goto WardrobeMain_4

WardrobeMain_30:
# 214 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 3
# 215 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
	goto WardrobeMain_4

WardrobeMain_31:
# 218 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
# 219 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	release
	end


WardrobeDoor::
# 238 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	waitdooranim
# 239 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	applymovement LOCALID_PLAYER, WardrobeUp
# 240 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	waitmovement 0
	return


# 244 "data/maps/Sandstone_SmallHouse1/scripts.pory"
WardrobeUp:
# 245 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	walk_up
# 246 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	set_invisible
	step_end

LilycoveCity_Clothier::
# 250 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto_if_set FLAG_PURCHASED_OUTFIT, LilycoveCity_Clothier_2
# 254 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	lock
# 255 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	faceplayer
# 256 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox InNeedOfOutfit, MSGBOX_DEFAULT
# 257 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto ClothierMain
	return

LilycoveCity_Clothier_2:
# 251 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox UseRoomToChange, MSGBOX_NPC
	end


ClothierMain::
# 261 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	message ClothierMain_Text_0
# 262 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	waitmessage
# 263 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	multichoice 23, 0, MULTI_OUTFIT, 0
# 264 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	switch VAR_RESULT
# 265 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case 0, ClothierMain_2
# 267 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case 1, ClothierMain_3
# 269 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case 2, ClothierMain_4
# 271 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case MULTI_B_PRESSED, ClothierMain_5
	return

ClothierMain_2:
# 266 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto PurchaseOutfit
	return

ClothierMain_3:
# 268 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto PreviewOutfit
	return

ClothierMain_4:
# 270 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto ThanksForShopping
	return

ClothierMain_5:
# 272 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto ThanksForShopping
	return


PreviewOutfit::
# 277 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	checkplayergender
# 278 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PreviewOutfit_2
# 282 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	showmonpic SPECIES_MAY_ORAS, 10, 3
PreviewOutfit_1:
# 284 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox LooksGoodOnYou, MSGBOX_DEFAULT
# 285 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
# 286 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	hidemonpic
# 287 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto ClothierMain
	return

PreviewOutfit_2:
# 279 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	showmonpic SPECIES_BRENDAN_ORAS, 10, 3
	goto PreviewOutfit_1


ThanksForShopping::
# 291 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 292 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
# 293 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	release
	end


PurchaseOutfit::
# 298 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	showmoneybox 0, 0
# 299 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox TotalIs25k, MSGBOX_YESNO
# 300 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PurchaseOutfit_2
PurchaseOutfit_1:
# 304 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	checkmoney 25000
# 305 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PurchaseOutfit_5
# 310 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	playse SE_SHOP
# 311 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	removemoney 25000
# 312 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	updatemoneybox
# 313 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox UseDressingRoom, MSGBOX_NPC
# 314 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	hidemoneybox
# 315 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setflag FLAG_PURCHASED_OUTFIT
	end

PurchaseOutfit_2:
# 301 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	hidemoneybox
# 302 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto ThanksForShopping
	goto PurchaseOutfit_1

PurchaseOutfit_5:
# 306 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox NotEnoughMoney, MSGBOX_NPC
# 307 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	hidemoneybox
	end


WardrobeMain_Text_0:
# 159 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Choose an outfit to wear.$"

WardrobeMain_Text_1:
# 162 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Option 1$"

WardrobeMain_Text_2:
# 163 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Option 2$"

WardrobeMain_Text_3:
# 165 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Option 3$"

WardrobeMain_Text_4:
# 168 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Option 4$"

WardrobeMain_Text_5:
# 170 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Exit$"

ClothierMain_Text_0:
# 261 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "What would you like to do?$"

Sandstone_SmallHouse_Woman_Text::
# 25 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Good thing I managed to grab that doll\n"
	.string "just before the department store ran\l"
	.string "out of stock.\p"
	.string "My daughter really seems to love it.$"

Sandstone_SmallHouse_Child_TakeThis::
# 31 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "I got a new doll!\p"
	.string "Here, I don't need this anymore.\n"
	.string "You can have it!$"

DontLetItPop::
# 36 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Don't let it pop!$"

Sandstone_SmallHouse_Man1_Text::
# 47 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Our living expenses have risen so much\n"
	.string "ever since moving to a big city.\p"
	.string "Thankfully our salaries are also\n"
	.string "higher.$"

Sandstone_SmallHouse_Woman1_Text::
# 53 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "I wasn't sure if living in a big city\n"
	.string "would be for me but now that we've\l"
	.string "lived here for a while, I don't think\l"
	.string "I could go back.$"

Sandstone_SmallHouse_OldMan_Text::
# 64 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "The city has tried buying my house\n"
	.string "countless of times just so that they\l"
	.string "can demolish it and replace it with\l"
	.string "yet another soulless high-rise.\p"
	.string "I tell you, for as long as I'm still\n"
	.string "breathing, I will never sell!$"

Sandstone_LookingForFisher::
# 104 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Hello. Are you looking for the\n"
	.string "Fishing Guru?\p"
	.string "That would be my husband.\p"
	.string "He can never sit still for long and is\n"
	.string "probably on a beach somewhere, fishing.$"

TakeToClancy::
# 111 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Please bring that to Clancy,\n"
	.string "wherever he currently is.$"

YouMetClancy::
# 115 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "You met Clancy and he asked if you\n"
	.string "could get him his lure?\p"
	.string "I wish he would've come get it himself\n"
	.string "instead of sending other people on\l"
	.string "errands but since you're here,\l"
	.string "you may as well take this.$"

HowIsClancy::
# 123 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "I hope Clancy was doing well.\p"
	.string "He sometimes gets so fixated on fishing\n"
	.string "that he even forgets to eat!$"

ItsaChangingRoom::
# 226 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "It's a dressing room for trying on and\n"
	.string "changing clothes.$"

ChangeOutfit::
# 231 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "It's a dressing room for trying on and\n"
	.string "changing clothes.\p"
	.string "Would you like to change your outfit?$"

InNeedOfOutfit::
# 319 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Welcome!\p"
	.string "This is the Sandstone Department Store\n"
	.string "clothing section.\p"
	.string "We are currently having a huge sale on\n"
	.string "clothing and clothing apparel.$"

LooksGoodOnYou::
# 326 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Ooh!\p"
	.string "You look absolutely dashing in that\n"
	.string "outfit! Wouldn't you agree?$"

TotalIs25k::
# 331 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "With the clothing and the apparel, your\n"
	.string "total comes to ¥25,000.\p"
	.string "Would you like to purchase a new\n"
	.string "outfit?$"

NotEnoughMoney::
# 337 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Oh, I'm sorry, but you can't afford\n"
	.string "that outfit…$"

UseDressingRoom::
# 341 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Thank you for your purchase!\p"
	.string "You can switch between your outfits by\n"
	.string "accessing the dressing rooms located\l"
	.string "right next to the elevator.\p"
	.string "Please come again!$"

UseRoomToChange::
# 348 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "You can switch between your outfits by\n"
	.string "accessing the dressing rooms located\l"
	.string "right next to the elevator.\p"
	.string "Please come again!$"
