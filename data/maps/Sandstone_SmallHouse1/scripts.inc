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
# 187 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultipush WardrobeMain_Text_1, SPECIES_MAY_RUBY
# 188 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultipush WardrobeMain_Text_2, SPECIES_MAY_EMERALD
# 189 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto_if_set FLAG_PURCHASED_OUTFIT, WardrobeMain_12
WardrobeMain_11:
# 192 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultipush WardrobeMain_Text_4, SPECIES_EMPTY
# 193 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultistack 23, 0, FALSE, 5, FALSE, 98, DYN_MULTICHOICE_CB_SHOW_MON
# 194 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	switch VAR_RESULT
# 195 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_MAY_RUBY, WardrobeMain_20
# 198 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_MAY_EMERALD, WardrobeMain_21
# 201 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_MAY_ORAS, WardrobeMain_22
# 204 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case MULTI_B_PRESSED, WardrobeMain_23
# 205 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_EMPTY, WardrobeMain_23
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
	dynmultipush WardrobeMain_Text_4, SPECIES_EMPTY
# 168 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultistack 23, 0, FALSE, 5, FALSE, 98, DYN_MULTICHOICE_CB_SHOW_MON
# 169 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	switch VAR_RESULT
# 170 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_BRENDAN_RUBY, WardrobeMain_15
# 173 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_BRENDAN_EMERALD, WardrobeMain_16
# 176 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_BRENDAN_ORAS, WardrobeMain_17
# 179 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case MULTI_B_PRESSED, WardrobeMain_18
# 180 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case SPECIES_EMPTY, WardrobeMain_18
	goto WardrobeMain_4

WardrobeMain_9:
# 165 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultipush WardrobeMain_Text_3, SPECIES_BRENDAN_ORAS
	goto WardrobeMain_8

WardrobeMain_12:
# 190 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	dynmultipush WardrobeMain_Text_3, SPECIES_MAY_ORAS
	goto WardrobeMain_11

WardrobeMain_15:
# 171 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 0
# 172 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
	goto WardrobeMain_4

WardrobeMain_16:
# 174 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 1
# 175 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
	goto WardrobeMain_4

WardrobeMain_17:
# 177 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 2
# 178 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
	goto WardrobeMain_4

WardrobeMain_18:
# 181 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
# 182 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	release
	end

WardrobeMain_20:
# 196 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 0
# 197 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
	goto WardrobeMain_4

WardrobeMain_21:
# 199 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 1
# 200 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
	goto WardrobeMain_4

WardrobeMain_22:
# 202 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 2
# 203 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
	goto WardrobeMain_4

WardrobeMain_23:
# 206 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
# 207 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	release
	end


WardrobeDoor::
# 226 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	waitdooranim
# 227 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WardrobeUp
# 228 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	waitmovement 0
	return


# 232 "data/maps/Sandstone_SmallHouse1/scripts.pory"
WardrobeUp:
# 233 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	walk_up
# 234 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	set_invisible
	step_end

LilycoveCity_Clothier::
# 238 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto_if_set FLAG_PURCHASED_OUTFIT, LilycoveCity_Clothier_2
# 242 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	lock
# 243 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	faceplayer
# 244 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox InNeedOfOutfit, MSGBOX_DEFAULT
# 245 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto ClothierMain
	return

LilycoveCity_Clothier_2:
# 239 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox UseRoomToChange, MSGBOX_NPC
	end


ClothierMain::
# 249 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	message ClothierMain_Text_0
# 250 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	waitmessage
# 251 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	multichoice 23, 0, MULTI_OUTFIT, 0
# 252 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	switch VAR_RESULT
# 253 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case 0, ClothierMain_2
# 255 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case 1, ClothierMain_3
# 257 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case 2, ClothierMain_4
# 259 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	case MULTI_B_PRESSED, ClothierMain_5
	return

ClothierMain_2:
# 254 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto PurchaseOutfit
	return

ClothierMain_3:
# 256 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto PreviewOutfit
	return

ClothierMain_4:
# 258 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto ThanksForShopping
	return

ClothierMain_5:
# 260 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto ThanksForShopping
	return


PreviewOutfit::
# 265 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	checkplayergender
# 266 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PreviewOutfit_2
# 270 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	showmonpic SPECIES_MAY_ORAS, 10, 3
PreviewOutfit_1:
# 272 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox LooksGoodOnYou, MSGBOX_DEFAULT
# 273 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
# 274 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	hidemonpic
# 275 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto ClothierMain
	return

PreviewOutfit_2:
# 267 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	showmonpic SPECIES_BRENDAN_ORAS, 10, 3
	goto PreviewOutfit_1


ThanksForShopping::
# 279 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 280 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	closemessage
# 281 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	release
	end


PurchaseOutfit::
# 286 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	showmoneybox 0, 0
# 287 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox TotalIs25k, MSGBOX_YESNO
# 288 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PurchaseOutfit_2
PurchaseOutfit_1:
# 292 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	checkmoney 25000
# 293 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PurchaseOutfit_5
# 298 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	playse SE_SHOP
# 299 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	removemoney 25000
# 300 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	updatemoneybox
# 301 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox UseDressingRoom, MSGBOX_NPC
# 302 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	hidemoneybox
# 303 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	setflag FLAG_PURCHASED_OUTFIT
	end

PurchaseOutfit_2:
# 289 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	hidemoneybox
# 290 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	goto ThanksForShopping
	goto PurchaseOutfit_1

PurchaseOutfit_5:
# 294 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	msgbox NotEnoughMoney, MSGBOX_NPC
# 295 "data/maps/Sandstone_SmallHouse1/scripts.pory"
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
# 167 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Exit$"

ClothierMain_Text_0:
# 249 "data/maps/Sandstone_SmallHouse1/scripts.pory"
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
# 214 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "It's a dressing room for trying on and\n"
	.string "changing clothes.$"

ChangeOutfit::
# 219 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "It's a dressing room for trying on and\n"
	.string "changing clothes.\p"
	.string "Would you like to change your outfit?$"

InNeedOfOutfit::
# 307 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Welcome!\p"
	.string "This is the Sandstone Department Store\n"
	.string "clothing section.\p"
	.string "We are currently having a huge sale on\n"
	.string "clothing and clothing apparel.$"

LooksGoodOnYou::
# 314 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Ooh!\p"
	.string "You look absolutely dashing in that\n"
	.string "outfit! Wouldn't you agree?$"

TotalIs25k::
# 319 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "With the clothing and the apparel, your\n"
	.string "total comes to ¥25,000.\p"
	.string "Would you like to purchase a new\n"
	.string "outfit?$"

NotEnoughMoney::
# 325 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Oh, I'm sorry, but you can't afford\n"
	.string "that outfit…$"

UseDressingRoom::
# 329 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "Thank you for your purchase!\p"
	.string "You can switch between your outfits by\n"
	.string "accessing the dressing rooms located\l"
	.string "right next to the elevator.\p"
	.string "Please come again!$"

UseRoomToChange::
# 336 "data/maps/Sandstone_SmallHouse1/scripts.pory"
	.string "You can switch between your outfits by\n"
	.string "accessing the dressing rooms located\l"
	.string "right next to the elevator.\p"
	.string "Please come again!$"
