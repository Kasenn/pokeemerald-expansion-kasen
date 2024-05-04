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
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


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
	goto_if_unset FLAG_PURCHASED_OUTFIT, WardrobeMain_2
	lock
	msgbox ChangeOutfit, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq WardrobeMain_5
	closemessage
	goto_if_set FLAG_PC_CHANGE_COSTUME, WardrobeMain_8
	setflag FLAG_PC_CHANGE_COSTUME
WardrobeMain_7:
	return

WardrobeMain_2:
	msgbox ItsaChangingRoom, MSGBOX_SIGN
	end

WardrobeMain_5:
	closemessage
	release
	end

WardrobeMain_8:
	clearflag FLAG_PC_CHANGE_COSTUME
	goto WardrobeMain_7


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
	showmonpic SPECIES_KINGLER, 10, 3
PreviewOutfit_1:
	msgbox LooksGoodOnYou, MSGBOX_DEFAULT
	closemessage
	hidemonpic
	goto ClothierMain
	return

PreviewOutfit_2:
	showmonpic SPECIES_KRABBY, 10, 3
	goto PreviewOutfit_1


ThanksForShopping::
	hidemoneybox
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
	goto ThanksForShopping
	goto PurchaseOutfit_1

PurchaseOutfit_5:
	msgbox NotEnoughMoney, MSGBOX_NPC
	hidemoneybox
	end


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
