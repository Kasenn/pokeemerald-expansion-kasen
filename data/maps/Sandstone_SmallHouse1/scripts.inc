Sandstone_SmallHouse1_MapScripts::
	.byte 0


Sandstone_SmallHouse_Woman::
	msgbox Sandstone_SmallHouse_Woman_Text, MSGBOX_NPC
	end


Sandstone_SmallHouse_Child::
	goto_if_set FLAG_SANDSTONE_BALLOON, Sandstone_SmallHouse_Child_2
	lock
	faceplayer
	msgbox Sandstone_SmallHouse_Child_TakeThis, MSGBOX_DEFAULT
	checkitemspace ITEM_AIR_BALLOON
	compare VAR_RESULT, FALSE
	goto_if_eq Sandstone_SmallHouse_Child_5
Sandstone_SmallHouse_Child_4:
	giveitem ITEM_AIR_BALLOON
	waitfanfare
	closemessage
	setflag FLAG_SANDSTONE_BALLOON
	release
	end

Sandstone_SmallHouse_Child_2:
	msgbox DontLetItPop, MSGBOX_NPC
	end

Sandstone_SmallHouse_Child_5:
	goto ZeBagIsFull
	goto Sandstone_SmallHouse_Child_4


Sandstone_SmallHouse_Man1::
	msgbox Sandstone_SmallHouse_Man1_Text, MSGBOX_NPC
	end


Sandstone_SmallHouse_Woman1::
	msgbox Sandstone_SmallHouse_Woman1_Text, MSGBOX_NPC
	end


Sandstone_SmallHouse_OldMan::
	msgbox Sandstone_SmallHouse_OldMan_Text, MSGBOX_NPC
	end


Sandstone_SmallHouse_FisherWoman::
	goto_if_set FLAG_RECEIVED_GOOD_ROD, Sandstone_SmallHouse_FisherWoman_2
	lock
	faceplayer
	checkitem ITEM_LURE
	compare VAR_RESULT, FALSE
	goto_if_eq Sandstone_SmallHouse_FisherWoman_5
Sandstone_SmallHouse_FisherWoman_4:
	goto_if_set FLAG_QUEST_FOR_GOOD_ROD, Sandstone_SmallHouse_FisherWoman_7
	return

Sandstone_SmallHouse_FisherWoman_2:
	msgbox HowIsClancy, MSGBOX_NPC
	end

Sandstone_SmallHouse_FisherWoman_5:
	msgbox Sandstone_LookingForFisher, MSGBOX_DEFAULT
	closemessage
	goto Sandstone_SmallHouse_FisherWoman_4

Sandstone_SmallHouse_FisherWoman_7:
	checkitem ITEM_LURE
	compare VAR_RESULT, TRUE
	goto_if_eq Sandstone_SmallHouse_FisherWoman_10
	playse SE_PIN
	safefollow
	applymovement 1, Common_Movement_QuestionMark
	waitmovement 0
	delay 30
	msgbox YouMetClancy, MSGBOX_DEFAULT
	giveitem ITEM_LURE
	waitfanfare
	msgbox TakeToClancy, MSGBOX_NPC
	end

Sandstone_SmallHouse_FisherWoman_10:
	msgbox TakeToClancy, MSGBOX_NPC
	end


WardrobeLeft::
	call WardrobeMain
	opendoor 5, 2
	call WardrobeDoor
	closedoor 5, 2
	waitdooranim
	warpsilent MAP_LILYCOVE_CITY_DEPARTMENT_STORE_5F, 5, 2
	waitstate
	end


WardrobeRight::
	call WardrobeMain
	opendoor 7, 2
	call WardrobeDoor
	closedoor 7, 2
	waitdooranim
	warpsilent MAP_LILYCOVE_CITY_DEPARTMENT_STORE_5F, 7, 2
	waitstate
	end


WardrobeMain::
	lock
	msgbox ChangeOutfit, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq WardrobeMain_2
	closemessage
	message WardrobeMain_Text_0
	waitmessage
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq WardrobeMain_5
	dynmultipush WardrobeMain_Text_1, SPECIES_MAY_RUBY
	dynmultipush WardrobeMain_Text_2, SPECIES_MAY_EMERALD
	goto_if_set FLAG_PURCHASED_OUTFIT, WardrobeMain_12
WardrobeMain_11:
	dynmultipush WardrobeMain_Text_4, SPECIES_EMPTY
	dynmultistack 23, 0, FALSE, 5, FALSE, 98, DYN_MULTICHOICE_CB_SHOW_MON
	switch VAR_RESULT
	case SPECIES_MAY_RUBY, WardrobeMain_20
	case SPECIES_MAY_EMERALD, WardrobeMain_21
	case SPECIES_MAY_ORAS, WardrobeMain_22
	case MULTI_B_PRESSED, WardrobeMain_23
	case SPECIES_EMPTY, WardrobeMain_23
WardrobeMain_4:
	return

WardrobeMain_2:
	closemessage
	release
	end

WardrobeMain_5:
	dynmultipush WardrobeMain_Text_1, SPECIES_BRENDAN_RUBY
	dynmultipush WardrobeMain_Text_2, SPECIES_BRENDAN_EMERALD
	goto_if_set FLAG_PURCHASED_OUTFIT, WardrobeMain_9
WardrobeMain_8:
	dynmultipush WardrobeMain_Text_4, SPECIES_EMPTY
	dynmultistack 23, 0, FALSE, 5, FALSE, 98, DYN_MULTICHOICE_CB_SHOW_MON
	switch VAR_RESULT
	case SPECIES_BRENDAN_RUBY, WardrobeMain_15
	case SPECIES_BRENDAN_EMERALD, WardrobeMain_16
	case SPECIES_BRENDAN_ORAS, WardrobeMain_17
	case MULTI_B_PRESSED, WardrobeMain_18
	case SPECIES_EMPTY, WardrobeMain_18
	goto WardrobeMain_4

WardrobeMain_9:
	dynmultipush WardrobeMain_Text_3, SPECIES_BRENDAN_ORAS
	goto WardrobeMain_8

WardrobeMain_12:
	dynmultipush WardrobeMain_Text_3, SPECIES_MAY_ORAS
	goto WardrobeMain_11

WardrobeMain_15:
	setvar VAR_CHOSEN_OUTFIT, 0
	closemessage
	goto WardrobeMain_4

WardrobeMain_16:
	setvar VAR_CHOSEN_OUTFIT, 1
	closemessage
	goto WardrobeMain_4

WardrobeMain_17:
	setvar VAR_CHOSEN_OUTFIT, 2
	closemessage
	goto WardrobeMain_4

WardrobeMain_18:
	closemessage
	release
	end

WardrobeMain_20:
	setvar VAR_CHOSEN_OUTFIT, 0
	closemessage
	goto WardrobeMain_4

WardrobeMain_21:
	setvar VAR_CHOSEN_OUTFIT, 1
	closemessage
	goto WardrobeMain_4

WardrobeMain_22:
	setvar VAR_CHOSEN_OUTFIT, 2
	closemessage
	goto WardrobeMain_4

WardrobeMain_23:
	closemessage
	release
	end


WardrobeDoor::
	waitdooranim
	applymovement OBJ_EVENT_ID_PLAYER, WardrobeUp
	waitmovement 0
	return


WardrobeUp:
	walk_up
	set_invisible
	step_end

LilycoveCity_Clothier::
	goto_if_set FLAG_PURCHASED_OUTFIT, LilycoveCity_Clothier_2
	lock
	faceplayer
	msgbox InNeedOfOutfit, MSGBOX_DEFAULT
	goto ClothierMain
	return

LilycoveCity_Clothier_2:
	msgbox UseRoomToChange, MSGBOX_NPC
	end


ClothierMain::
	message ClothierMain_Text_0
	waitmessage
	multichoice 23, 0, MULTI_OUTFIT, 0
	switch VAR_RESULT
	case 0, ClothierMain_2
	case 1, ClothierMain_3
	case 2, ClothierMain_4
	case MULTI_B_PRESSED, ClothierMain_5
	return

ClothierMain_2:
	goto PurchaseOutfit
	return

ClothierMain_3:
	goto PreviewOutfit
	return

ClothierMain_4:
	goto ThanksForShopping
	return

ClothierMain_5:
	goto ThanksForShopping
	return


PreviewOutfit::
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq PreviewOutfit_2
	showmonpic SPECIES_MAY_ORAS, 10, 3
PreviewOutfit_1:
	msgbox LooksGoodOnYou, MSGBOX_DEFAULT
	closemessage
	hidemonpic
	goto ClothierMain
	return

PreviewOutfit_2:
	showmonpic SPECIES_BRENDAN_ORAS, 10, 3
	goto PreviewOutfit_1


ThanksForShopping::
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	closemessage
	release
	end


PurchaseOutfit::
	showmoneybox 0, 0
	msgbox TotalIs25k, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq PurchaseOutfit_2
PurchaseOutfit_1:
	checkmoney 25000
	compare VAR_RESULT, FALSE
	goto_if_eq PurchaseOutfit_5
	playse SE_SHOP
	removemoney 25000
	updatemoneybox
	msgbox UseDressingRoom, MSGBOX_NPC
	hidemoneybox
	setflag FLAG_PURCHASED_OUTFIT
	end

PurchaseOutfit_2:
	hidemoneybox
	goto ThanksForShopping
	goto PurchaseOutfit_1

PurchaseOutfit_5:
	msgbox NotEnoughMoney, MSGBOX_NPC
	hidemoneybox
	end


WardrobeMain_Text_0:
	.string "Choose an outfit to wear.$"

WardrobeMain_Text_1:
	.string "Option 1$"

WardrobeMain_Text_2:
	.string "Option 2$"

WardrobeMain_Text_3:
	.string "Option 3$"

WardrobeMain_Text_4:
	.string "Exit$"

ClothierMain_Text_0:
	.string "What would you like to do?$"

Sandstone_SmallHouse_Woman_Text::
	.string "Good thing I managed to grab that doll\n"
	.string "just before the department store ran\l"
	.string "out of stock.\p"
	.string "My daughter really seems to love it.$"

Sandstone_SmallHouse_Child_TakeThis::
	.string "I got a new doll!\p"
	.string "Here, I don't need this anymore.\n"
	.string "You can have it!$"

DontLetItPop::
	.string "Don't let it pop!$"

Sandstone_SmallHouse_Man1_Text::
	.string "Our living expenses have risen so much\n"
	.string "ever since moving to a big city.\p"
	.string "Thankfully our salaries are also\n"
	.string "higher.$"

Sandstone_SmallHouse_Woman1_Text::
	.string "I wasn't sure if living in a big city\n"
	.string "would be for me but now that we've\l"
	.string "lived here for a while, I don't think\l"
	.string "I could go back.$"

Sandstone_SmallHouse_OldMan_Text::
	.string "The city has tried buying my house\n"
	.string "countless of times just so that they\l"
	.string "can demolish it and replace it with\l"
	.string "yet another soulless high-rise.\p"
	.string "I tell you, for as long as I'm still\n"
	.string "breathing, I will never sell!$"

Sandstone_LookingForFisher::
	.string "Hello. Are you looking for the\n"
	.string "Fishing Guru?\p"
	.string "That would be my husband.\p"
	.string "He can never sit still for long and is\n"
	.string "probably on a beach somewhere, fishing.$"

TakeToClancy::
	.string "Please bring that to Clancy,\n"
	.string "wherever he currently is.$"

YouMetClancy::
	.string "You met Clancy and he asked if you\n"
	.string "could get him his lure?\p"
	.string "I wish he would've come get it himself\n"
	.string "instead of sending other people on\l"
	.string "errands but since you're here,\l"
	.string "you may as well take this.$"

HowIsClancy::
	.string "I hope Clancy was doing well.\p"
	.string "He sometimes gets so fixated on fishing\n"
	.string "that he even forgets to eat!$"

ItsaChangingRoom::
	.string "It's a dressing room for trying on and\n"
	.string "changing clothes.$"

ChangeOutfit::
	.string "It's a dressing room for trying on and\n"
	.string "changing clothes.\p"
	.string "Would you like to change your outfit?$"

InNeedOfOutfit::
	.string "Welcome!\p"
	.string "This is the Sandstone Department Store\n"
	.string "clothing section.\p"
	.string "We are currently having a huge sale on\n"
	.string "clothing and clothing apparel.$"

LooksGoodOnYou::
	.string "Ooh!\p"
	.string "You look absolutely dashing in that\n"
	.string "outfit! Wouldn't you agree?$"

TotalIs25k::
	.string "With the clothing and the apparel, your\n"
	.string "total comes to ¥25,000.\p"
	.string "Would you like to purchase a new\n"
	.string "outfit?$"

NotEnoughMoney::
	.string "Oh, I'm sorry, but you can't afford\n"
	.string "that outfit…$"

UseDressingRoom::
	.string "Thank you for your purchase!\p"
	.string "You can switch between your outfits by\n"
	.string "accessing the dressing rooms located\l"
	.string "right next to the elevator.\p"
	.string "Please come again!$"

UseRoomToChange::
	.string "You can switch between your outfits by\n"
	.string "accessing the dressing rooms located\l"
	.string "right next to the elevator.\p"
	.string "Please come again!$"
