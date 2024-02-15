RanchBarn_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BarnSetTiles
	.byte 0


BarnSetTiles::
	goto_if_set FLAG_BADGE02_GET, BarnSetTiles_2
BarnSetTiles_1:
	end

BarnSetTiles_2:
	setmetatile 6, 6, 0x376, FALSE
	setmetatile 7, 6, 0x373, FALSE
	special DrawWholeMapView
	goto BarnSetTiles_1


BarnJugOfWater::
	msgbox BarnJugOfWater_Text_0, MSGBOX_SIGN
	end


BarnHappyMareep::
	lock
	waitse
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
	msgbox BarnHappyMareep_Text_0, MSGBOX_DEFAULT
	waitmoncry
	release
	end


BarnSadMareep::
	lock
	waitse
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
	msgbox BarnSadMareep_Text_0, MSGBOX_DEFAULT
	waitmoncry
	release
	end


BarnShearingBoy::
	lock
	faceplayer
	msgbox BarnShearingBoy_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


BarnConcernedGirl::
	lock
	faceplayer
	msgbox BarnConcernedGirl_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


BarnSickMareep::
	goto_if_set FLAG_JASMINE_HELPED, BarnSickMareep_1
	goto BarnSadMareep
	return

BarnSickMareep_1:
	goto BarnHappyMareep
	return


BarnJasmineEvent::
	lock
	faceplayer
	goto_if_set FLAG_JASMINE_HELPED, BarnJasmineEvent_24
BarnJasmineEvent_23:
	goto_if_set FLAG_RANCH_HELPED, BarnJasmineEvent_3
	goto_if_unset FLAG_VOLKNER_TALKED_TO_FIRST, BarnJasmineEvent_20
BarnJasmineEvent_16:
	goto_if_set FLAG_VOLKNER_TALKED_TO_FIRST, BarnJasmineEvent_15
BarnJasmineEvent_11:
	goto_if_set FLAG_VOLKNER_TALKED_TO_FIRST, BarnJasmineEvent_10
BarnJasmineEvent_9:
	goto_if_set FLAG_JASMINE_QUEST_STARTED, BarnJasmineEvent_7
	waitmessage
	closemessage
	release
	end

BarnJasmineEvent_1:
	waitmessage
	closemessage
	release
	end

BarnJasmineEvent_2:
	msgbox BarnJasmine_VolknerNeedsHelp, MSGBOX_DEFAULT
	goto BarnJasmineEvent_1

BarnJasmineEvent_3:
	msgbox BarnJasmine_StayForWhile, MSGBOX_DEFAULT
	goto BarnJasmineEvent_1

BarnJasmineEvent_4:
	msgbox JasmineBarn_FirstMeeting, MSGBOX_DEFAULT
	giveitem ITEM_COIN_PURSE
	waitse
	setflag FLAG_JASMINE_QUEST_STARTED
	setflag FLAG_JASMINE_MET
	setflag FLAG_JASMINE_TALKED_TO_FIRST
	checkitem ITEM_HERBAL_MIX
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_27
	goto BarnJasmineEvent_1

BarnJasmineEvent_5:
	msgbox JasmineBarn_MeetingAfterVolkner, MSGBOX_DEFAULT
	giveitem ITEM_COIN_PURSE
	waitse
	setflag FLAG_JASMINE_QUEST_STARTED
	setflag FLAG_JASMINE_MET
	checkitem ITEM_HERBAL_MIX
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_29
	goto BarnJasmineEvent_1

BarnJasmineEvent_6:
	msgbox JasmineBarn_MeetingAfterForest, MSGBOX_DEFAULT
	giveitem ITEM_COIN_PURSE
	waitse
	setflag FLAG_JASMINE_QUEST_STARTED
	setflag FLAG_JASMINE_MET
	checkitem ITEM_HERBAL_MIX
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_31
	goto BarnJasmineEvent_1

BarnJasmineEvent_7:
	goto_if_set FLAG_VISITED_HERB_SHOP_2, BarnJasmineEvent_33
	goto_if_set FLAG_VISITED_HERB_SHOP, BarnJasmineEvent_34
	checkitem ITEM_HERBAL_MIX
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_50
	msgbox BarnJasmine_GoVisitHerbShop, MSGBOX_DEFAULT
	goto BarnJasmineEvent_1

BarnJasmineEvent_10:
	goto_if_unset FLAG_JASMINE_MET, BarnJasmineEvent_12
	goto BarnJasmineEvent_9

BarnJasmineEvent_12:
	goto_if_set FLAG_VOLKNER_HELPED, BarnJasmineEvent_6
	goto BarnJasmineEvent_9

BarnJasmineEvent_15:
	goto_if_unset FLAG_JASMINE_MET, BarnJasmineEvent_17
	goto BarnJasmineEvent_11

BarnJasmineEvent_17:
	goto_if_unset FLAG_VOLKNER_HELPED, BarnJasmineEvent_5
	goto BarnJasmineEvent_11

BarnJasmineEvent_20:
	goto_if_unset FLAG_JASMINE_MET, BarnJasmineEvent_4
	goto BarnJasmineEvent_16

BarnJasmineEvent_24:
	goto_if_unset FLAG_VOLKNER_HELPED, BarnJasmineEvent_2
	goto BarnJasmineEvent_23

BarnJasmineEvent_27:
	msgbox BarnJasmine_AlreadyCarryingMix, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_38
	msgbox BarnJasmine_ThatsTooBad, MSGBOX_DEFAULT
	goto BarnJasmineEvent_1

BarnJasmineEvent_29:
	msgbox BarnJasmine_AlreadyCarryingMix, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_41
	msgbox BarnJasmine_ThatsTooBad, MSGBOX_DEFAULT
	goto BarnJasmineEvent_1

BarnJasmineEvent_31:
	msgbox BarnJasmine_AlreadyCarryingMix, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_44
	msgbox BarnJasmine_ThatsTooBad, MSGBOX_DEFAULT
	goto BarnJasmineEvent_1

BarnJasmineEvent_33:
	removeitem ITEM_HERBAL_MIX_QUEST
	msgbox BarnJasmine_HeresTheMedicine, MSGBOX_DEFAULT
	goto BarnJasmine_EventHealMareep
	goto BarnJasmineEvent_1

BarnJasmineEvent_34:
	checkitem ITEM_HERBAL_MIX
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_48
BarnJasmineEvent_47:
	compare VAR_RESULT, FALSE
	goto_if_eq BarnJasmineEvent_53
	goto BarnJasmineEvent_1

BarnJasmineEvent_38:
	removeitem ITEM_HERBAL_MIX, 1
	goto BarnJasmine_EventHealMareep
	goto BarnJasmineEvent_1

BarnJasmineEvent_41:
	removeitem ITEM_HERBAL_MIX, 1
	goto BarnJasmine_EventHealMareep
	goto BarnJasmineEvent_1

BarnJasmineEvent_44:
	removeitem ITEM_HERBAL_MIX, 1
	goto BarnJasmine_EventHealMareep
	goto BarnJasmineEvent_1

BarnJasmineEvent_48:
	removeitem ITEM_HERBAL_MIX, 1
	msgbox BarnJasmine_HeresTheMedicine, MSGBOX_DEFAULT
	goto BarnJasmine_EventHealMareep
	goto BarnJasmineEvent_47

BarnJasmineEvent_50:
	goto_if_set FLAG_VISITED_HERB_SHOP, BarnJasmineEvent_56
	msgbox BarnJasmine_HaveYouChangedMind, MSGBOX_YESNO
BarnJasmineEvent_55:
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_59
	msgbox BarnJasmine_ThatsTooBad, MSGBOX_DEFAULT
	goto BarnJasmineEvent_1

BarnJasmineEvent_53:
	msgbox BarnJasmine_WhereHerbalMix, MSGBOX_DEFAULT
	giveitem ITEM_JASM_LETTER
	waitse
	msgbox BarnJasmine_DontFail, MSGBOX_DEFAULT
	goto BarnJasmineEvent_1

BarnJasmineEvent_56:
	removeitem ITEM_HERBAL_MIX, 1
	msgbox BarnJasmine_HeresTheMedicine, MSGBOX_DEFAULT
	goto BarnJasmine_EventHealMareep
	goto BarnJasmineEvent_55

BarnJasmineEvent_59:
	removeitem ITEM_HERBAL_MIX, 1
	goto BarnJasmine_EventHealMareep
	goto BarnJasmineEvent_1


BarnJasmine_EventHealMareep::
	playfanfare MUS_OBTAIN_ITEM
	msgbox BarnJasmine_HandOverHerbalMix, MSGBOX_DEFAULT
	waitfanfare
	waitmessage
	msgbox BarnJasmine_HealingMareep, MSGBOX_DEFAULT
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	fadescreen FADE_FROM_BLACK
	goto_if_set FLAG_VOLKNER_HELPED, BarnJasmine_EventHealMareep_1
	setflag FLAG_JASMINE_HELPED
	goto_if_set FLAG_VOLKNER_MET, BarnJasmine_EventHealMareep_5
	msgbox BarnJasmine_QuestComplete2, MSGBOX_DEFAULT
BarnJasmine_EventHealMareep_4:
	waitmessage
	closemessage
	release
	end

BarnJasmine_EventHealMareep_1:
	call Ranch_QuestFlagsComplete
	msgbox BarnJasmine_QuestComplete, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end

BarnJasmine_EventHealMareep_5:
	msgbox BarnJasmine_QuestComplete, MSGBOX_DEFAULT
	goto BarnJasmine_EventHealMareep_4


BarnJugOfWater_Text_0:
	.string "It's a jug full of water.$"

BarnHappyMareep_Text_0:
	.string "Baa!$"

BarnSadMareep_Text_0:
	.string "Baa…$"

BarnShearingBoy_Text_0:
	.string "I'm supposed to be shearing this Mareep\nbut how can I do that when it won't\lstand still?$"

BarnConcernedGirl_Text_0:
	.string "This li'l fella has fallen ill so we\nhad to quarantine it while we work on\lthe other one.$"

BarnJasmine_HeresTheMedicine::
	.string "Jasmine: You're back already.\n"
	.string "Do you have the medicine?$"

BarnJasmine_HandOverHerbalMix::
	.string "{PLAYER} handed the Herbal Mix\n"
	.string "to Jasmine.$"

BarnJasmine_HealingMareep::
	.string "Jasmine: Thank you so much\n"
	.string "for your help.\p"
	.string "Now I just need to mix these herbs with\n"
	.string "some of this guy's favorite feed and…\p"
	.string "Mareep: B-Baa…!\p"
	.string "Jasmine: I know, it probably\n"
	.string "tastes awful…\l"
	.string "But still, I need you to swallow it…$"

BarnJasmine_QuestComplete::
	.string "Jasmine: The Mareep is already\n"
	.string "starting to look much better.\p"
	.string "Oh, I'm so relieved…\n"
	.string "This is just so wonderful…\l"
	.string "Thank you so very, very much.\p"
	.string "Do you think you could let\n"
	.string "Volkner know about our progress?\p"
	.string "I still need to monitor this\n"
	.string "little guy's condition.\p"
	.string "Once I'm sure it's healthy,\n"
	.string "I need to care after the Mareep\l"
	.string "in the next stall as well.$"

BarnJasmine_QuestComplete2::
	.string "Jasmine: The Mareep is already\n"
	.string "starting to look much better.\p"
	.string "Oh, I'm so relieved…\n"
	.string "This is just so wonderful…\l"
	.string "Thank you so very, very much.\p"
	.string "Do you think you could let\n"
	.string "Volkner know about our progress?\p"
	.string "He's a blonde guy, shouldn't be\n"
	.string "too far away from the barn.\p"
	.string "I still need to monitor this\n"
	.string "little guy's condition.\p"
	.string "Once I'm sure it's healthy,\n"
	.string "I need to care after the Mareep\l"
	.string "in the next stall as well.$"

BarnJasmine_VolknerNeedsHelp::
	.string "Jasmine: I need to stay here and\n"
	.string "monitor this little guy's condition.\p"
	.string "In the meanwhile, do you think\n"
	.string "you could go help Volkner out…?$"

BarnJasmine_StayForWhile::
	.string "Jasmine: I still need to make sure\n"
	.string "this little guy is okay.\p"
	.string "After that I need to move on to the\n"
	.string "next patient…\p"
	.string "I might be staying here for a while.$"

JasmineBarn_FirstMeeting::
	.string "Um… I'm sorry,\n"
	.string "but this place is off-limits…\p"
	.string "Although…\p"
	.string "I guess I could use some help\n"
	.string "with this case.\p"
	.string "My name is Jasmine.\n"
	.string "A friend of mine called me over to help.\p"
	.string "It seems there might be problems\n"
	.string "brewing here at the ranch…\p"
	.string "I'm not sure I'm the best person for\n"
	.string "this job but he said that my prior\l"
	.string "experience could be helpful here…\p"
	.string "Anyway, do you think\n"
	.string "you could lend a hand?\l"
	.string "This little guy has fallen ill and\l"
	.string "is in need of some potent medicine\l"
	.string "called the Herbal Mix…\p"
	.string "The only place that sells it is\n"
	.string "the herb shop in Azuretide Town.\p"
	.string "I'd go myself but I need to stay here\n"
	.string "and make sure this pal's condition\l"
	.string "doesn't worsen…\p"
	.string "Here, I attached a note on this\n"
	.string "coin purse.\p"
	.string "Just give it to the clerk at the herb\n"
	.string "shop and he'll give you the medicine.$"

JasmineBarn_MeetingAfterVolkner::
	.string "Um… I'm sorry,\n"
	.string "but this place is off-limits…\p"
	.string "What's that?\n"
	.string "Volkner sent you?\p"
	.string "In that case, I guess I could use\n"
	.string "an extra pair of hands…\p"
	.string "My name is Jasmine.\n"
	.string "Volkner called me over to help.\p"
	.string "It seems there might be problems\n"
	.string "brewing here at the ranch…\p"
	.string "I'm not sure I'm the best person for\n"
	.string "this job but he said that my prior\l"
	.string "experience could be helpful here…\p"
	.string "Anyway, do you think\n"
	.string "you could lend a hand?\l"
	.string "This little guy has fallen ill and\l"
	.string "is in need of some potent medicine\l"
	.string "called the Herbal Mix…\p"
	.string "The only place that sells it is\n"
	.string "the herb shop in Azuretide Town.\p"
	.string "I'd go myself but I need to stay here\n"
	.string "and make sure this pal's condition\l"
	.string "doesn't worsen…\p"
	.string "Here, I attached a note on this\n"
	.string "coin purse.\p"
	.string "Just give it to the clerk at the herb\n"
	.string "shop and he'll give you the medicine.$"

JasmineBarn_MeetingAfterForest::
	.string "Um… I'm sorry,\n"
	.string "but this place is off-limits…\p"
	.string "Wait, you're the trainer who was\n"
	.string "being harassed by Team Rocket…\p"
	.string "Oh, I'm sorry.\n"
	.string "Where are my manners…\p"
	.string "My name is Jasmine.\n"
	.string "Volkner called me over to help.\p"
	.string "It seems there might be problems\n"
	.string "brewing here at the ranch…\p"
	.string "I'm not sure I'm the best person for\n"
	.string "this job but he said that my prior\l"
	.string "experience could be helpful here…\p"
	.string "Anyway, do you think\n"
	.string "you could lend a hand?\l"
	.string "This little guy has fallen ill and\l"
	.string "is in need of some potent medicine\l"
	.string "called the Herbal Mix…\p"
	.string "The only place that sells it is\n"
	.string "the herb shop in Azuretide Town.\p"
	.string "I'd go myself but I need to stay here\n"
	.string "and make sure this pal's condition\l"
	.string "doesn't worsen…\p"
	.string "Here, I attached a note on this\n"
	.string "coin purse.\p"
	.string "Just give it to the clerk at the herb\n"
	.string "shop and he'll give you the medicine.$"

BarnJasmine_AlreadyCarryingMix::
	.string "Oh, but I notice you are already\n"
	.string "carrying some Herbal Mix…\p"
	.string "Would you be willing to part with it\n"
	.string "so I may help this Mareep at once?\p"
	.string "You can still take that purse to the\n"
	.string "herb shop afterwards and\l"
	.string "receive a new batch in return…$"

BarnJasmine_ThatsTooBad::
	.string "I understand…\p"
	.string "Well, do let me know if you change\n"
	.string "your mind or have visited\l"
	.string "the herb shop to get another batch…$"

BarnJasmine_HaveYouChangedMind::
	.string "Jasmine: I see the coin purse\n"
	.string "is still full.\p"
	.string "Despite it, I see you are\n"
	.string "already carrying some Herbal Mix…\p"
	.string "Would you be willing to part with it\n"
	.string "so I may help this Mareep at once?\p"
	.string "You can still take that purse to the\n"
	.string "herb shop afterwards and\l"
	.string "receive a new batch in return…$"

BarnJasmine_GoVisitHerbShop::
	.string "Jasmine: I need to stay and monitor\n"
	.string "this pal's condition…\p"
	.string "Could you please fetch the Herbal Mix\n"
	.string "from Azuretide Town's herb shop…?$"

BarnJasmine_WhereHerbalMix::
	.string "Did you visit the herb shop?\n"
	.string "What happened to the Herbal Mix?\p"
	.string "Sigh…\p"
	.string "This is really urgent so I wish\n"
	.string "you took this more seriously…\p"
	.string "… … …\p"
	.string "I wrote this note that\n"
	.string "explains the situation.\p"
	.string "Please take it to the herb shop\n"
	.string "and give it to the clerk there…$"

BarnJasmine_DontFail::
	.string "Jasmine: Please…\n"
	.string "This is really urgent…$"
