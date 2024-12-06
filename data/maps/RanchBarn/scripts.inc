RanchBarn_MapScripts::
# 2 "data/maps/RanchBarn/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BarnSetTiles
	.byte 0


BarnSetTiles::
# 6 "data/maps/RanchBarn/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, BarnSetTiles_2
BarnSetTiles_1:
	end

BarnSetTiles_2:
# 7 "data/maps/RanchBarn/scripts.pory"
	setmetatile 6, 6, 0x376, FALSE
# 8 "data/maps/RanchBarn/scripts.pory"
	setmetatile 7, 6, 0x373, FALSE
# 9 "data/maps/RanchBarn/scripts.pory"
	special DrawWholeMapView
	goto BarnSetTiles_1


BarnJugOfWater::
# 15 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJugOfWater_Text_0, MSGBOX_SIGN
	end


BarnHappyMareep::
# 20 "data/maps/RanchBarn/scripts.pory"
	lock
# 21 "data/maps/RanchBarn/scripts.pory"
	waitse
# 22 "data/maps/RanchBarn/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 23 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnHappyMareep_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/RanchBarn/scripts.pory"
	waitmoncry
# 25 "data/maps/RanchBarn/scripts.pory"
	release
	end


BarnSadMareep::
# 30 "data/maps/RanchBarn/scripts.pory"
	lock
# 31 "data/maps/RanchBarn/scripts.pory"
	waitse
# 32 "data/maps/RanchBarn/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 33 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnSadMareep_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/RanchBarn/scripts.pory"
	waitmoncry
# 35 "data/maps/RanchBarn/scripts.pory"
	release
	end


BarnShearingBoy::
# 40 "data/maps/RanchBarn/scripts.pory"
	lock
# 41 "data/maps/RanchBarn/scripts.pory"
	faceplayer
# 42 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnShearingBoy_Text_0, MSGBOX_DEFAULT
# 43 "data/maps/RanchBarn/scripts.pory"
	waitmessage
# 44 "data/maps/RanchBarn/scripts.pory"
	closemessage
# 45 "data/maps/RanchBarn/scripts.pory"
	release
	end


BarnConcernedGirl::
# 50 "data/maps/RanchBarn/scripts.pory"
	lock
# 51 "data/maps/RanchBarn/scripts.pory"
	faceplayer
# 52 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnConcernedGirl_Text_0, MSGBOX_DEFAULT
# 53 "data/maps/RanchBarn/scripts.pory"
	waitmessage
# 54 "data/maps/RanchBarn/scripts.pory"
	closemessage
# 55 "data/maps/RanchBarn/scripts.pory"
	release
	end


BarnSickMareep::
# 60 "data/maps/RanchBarn/scripts.pory"
	goto_if_set FLAG_JASMINE_HELPED, BarnSickMareep_1
# 64 "data/maps/RanchBarn/scripts.pory"
	goto BarnSadMareep
	return

BarnSickMareep_1:
# 61 "data/maps/RanchBarn/scripts.pory"
	goto BarnHappyMareep
	return


BarnJasmineEvent::
# 69 "data/maps/RanchBarn/scripts.pory"
	lock
# 70 "data/maps/RanchBarn/scripts.pory"
	faceplayer
# 71 "data/maps/RanchBarn/scripts.pory"
	goto_if_set FLAG_JASMINE_HELPED, BarnJasmineEvent_24
BarnJasmineEvent_23:
# 74 "data/maps/RanchBarn/scripts.pory"
	goto_if_set FLAG_RANCH_HELPED, BarnJasmineEvent_3
# 77 "data/maps/RanchBarn/scripts.pory"
	goto_if_unset FLAG_VOLKNER_TALKED_TO_FIRST, BarnJasmineEvent_20
BarnJasmineEvent_16:
# 96 "data/maps/RanchBarn/scripts.pory"
	goto_if_set FLAG_VOLKNER_TALKED_TO_FIRST, BarnJasmineEvent_15
BarnJasmineEvent_11:
# 114 "data/maps/RanchBarn/scripts.pory"
	goto_if_set FLAG_VOLKNER_TALKED_TO_FIRST, BarnJasmineEvent_10
BarnJasmineEvent_9:
# 132 "data/maps/RanchBarn/scripts.pory"
	goto_if_set FLAG_JASMINE_QUEST_STARTED, BarnJasmineEvent_7
# 177 "data/maps/RanchBarn/scripts.pory"
	waitmessage
# 178 "data/maps/RanchBarn/scripts.pory"
	closemessage
# 179 "data/maps/RanchBarn/scripts.pory"
	release
	end

BarnJasmineEvent_1:
# 182 "data/maps/RanchBarn/scripts.pory"
	waitmessage
# 183 "data/maps/RanchBarn/scripts.pory"
	closemessage
# 184 "data/maps/RanchBarn/scripts.pory"
	release
	end

BarnJasmineEvent_2:
# 72 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_VolknerNeedsHelp, MSGBOX_DEFAULT
	goto BarnJasmineEvent_1

BarnJasmineEvent_3:
# 75 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_StayForWhile, MSGBOX_DEFAULT
	goto BarnJasmineEvent_1

BarnJasmineEvent_4:
# 78 "data/maps/RanchBarn/scripts.pory"
	msgbox JasmineBarn_FirstMeeting, MSGBOX_DEFAULT
# 79 "data/maps/RanchBarn/scripts.pory"
	giveitem ITEM_COIN_PURSE
# 80 "data/maps/RanchBarn/scripts.pory"
	waitse
# 81 "data/maps/RanchBarn/scripts.pory"
	setflag FLAG_JASMINE_QUEST_STARTED
# 82 "data/maps/RanchBarn/scripts.pory"
	setflag FLAG_JASMINE_MET
# 83 "data/maps/RanchBarn/scripts.pory"
	setflag FLAG_JASMINE_TALKED_TO_FIRST
# 84 "data/maps/RanchBarn/scripts.pory"
	checkitem ITEM_HERBAL_MIX
# 85 "data/maps/RanchBarn/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_27
	goto BarnJasmineEvent_1

BarnJasmineEvent_5:
# 97 "data/maps/RanchBarn/scripts.pory"
	msgbox JasmineBarn_MeetingAfterVolkner, MSGBOX_DEFAULT
# 98 "data/maps/RanchBarn/scripts.pory"
	giveitem ITEM_COIN_PURSE
# 99 "data/maps/RanchBarn/scripts.pory"
	waitse
# 100 "data/maps/RanchBarn/scripts.pory"
	setflag FLAG_JASMINE_QUEST_STARTED
# 101 "data/maps/RanchBarn/scripts.pory"
	setflag FLAG_JASMINE_MET
# 102 "data/maps/RanchBarn/scripts.pory"
	checkitem ITEM_HERBAL_MIX
# 103 "data/maps/RanchBarn/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_29
	goto BarnJasmineEvent_1

BarnJasmineEvent_6:
# 115 "data/maps/RanchBarn/scripts.pory"
	msgbox JasmineBarn_MeetingAfterForest, MSGBOX_DEFAULT
# 116 "data/maps/RanchBarn/scripts.pory"
	giveitem ITEM_COIN_PURSE
# 117 "data/maps/RanchBarn/scripts.pory"
	waitse
# 118 "data/maps/RanchBarn/scripts.pory"
	setflag FLAG_JASMINE_QUEST_STARTED
# 119 "data/maps/RanchBarn/scripts.pory"
	setflag FLAG_JASMINE_MET
# 120 "data/maps/RanchBarn/scripts.pory"
	checkitem ITEM_HERBAL_MIX
# 121 "data/maps/RanchBarn/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_31
	goto BarnJasmineEvent_1

BarnJasmineEvent_7:
# 133 "data/maps/RanchBarn/scripts.pory"
	goto_if_set FLAG_VISITED_HERB_SHOP_2, BarnJasmineEvent_33
# 138 "data/maps/RanchBarn/scripts.pory"
	goto_if_set FLAG_VISITED_HERB_SHOP, BarnJasmineEvent_34
# 153 "data/maps/RanchBarn/scripts.pory"
	checkitem ITEM_HERBAL_MIX
# 154 "data/maps/RanchBarn/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_50
# 172 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_GoVisitHerbShop, MSGBOX_DEFAULT
	goto BarnJasmineEvent_1

BarnJasmineEvent_10:
# 114 "data/maps/RanchBarn/scripts.pory"
	goto_if_unset FLAG_JASMINE_MET, BarnJasmineEvent_12
	goto BarnJasmineEvent_9

BarnJasmineEvent_12:
# 114 "data/maps/RanchBarn/scripts.pory"
	goto_if_set FLAG_VOLKNER_HELPED, BarnJasmineEvent_6
	goto BarnJasmineEvent_9

BarnJasmineEvent_15:
# 96 "data/maps/RanchBarn/scripts.pory"
	goto_if_unset FLAG_JASMINE_MET, BarnJasmineEvent_17
	goto BarnJasmineEvent_11

BarnJasmineEvent_17:
# 96 "data/maps/RanchBarn/scripts.pory"
	goto_if_unset FLAG_VOLKNER_HELPED, BarnJasmineEvent_5
	goto BarnJasmineEvent_11

BarnJasmineEvent_20:
# 77 "data/maps/RanchBarn/scripts.pory"
	goto_if_unset FLAG_JASMINE_MET, BarnJasmineEvent_4
	goto BarnJasmineEvent_16

BarnJasmineEvent_24:
# 71 "data/maps/RanchBarn/scripts.pory"
	goto_if_unset FLAG_VOLKNER_HELPED, BarnJasmineEvent_2
	goto BarnJasmineEvent_23

BarnJasmineEvent_27:
# 86 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_AlreadyCarryingMix, MSGBOX_YESNO
# 87 "data/maps/RanchBarn/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_38
# 92 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_ThatsTooBad, MSGBOX_DEFAULT
	goto BarnJasmineEvent_1

BarnJasmineEvent_29:
# 104 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_AlreadyCarryingMix, MSGBOX_YESNO
# 105 "data/maps/RanchBarn/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_41
# 110 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_ThatsTooBad, MSGBOX_DEFAULT
	goto BarnJasmineEvent_1

BarnJasmineEvent_31:
# 122 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_AlreadyCarryingMix, MSGBOX_YESNO
# 123 "data/maps/RanchBarn/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_44
# 128 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_ThatsTooBad, MSGBOX_DEFAULT
	goto BarnJasmineEvent_1

BarnJasmineEvent_33:
# 134 "data/maps/RanchBarn/scripts.pory"
	removeitem ITEM_HERBAL_MIX_QUEST
# 135 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_HeresTheMedicine, MSGBOX_DEFAULT
# 136 "data/maps/RanchBarn/scripts.pory"
	goto BarnJasmine_EventHealMareep
	goto BarnJasmineEvent_1

BarnJasmineEvent_34:
# 139 "data/maps/RanchBarn/scripts.pory"
	checkitem ITEM_HERBAL_MIX
# 140 "data/maps/RanchBarn/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_48
BarnJasmineEvent_47:
# 145 "data/maps/RanchBarn/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BarnJasmineEvent_53
	goto BarnJasmineEvent_1

BarnJasmineEvent_38:
# 88 "data/maps/RanchBarn/scripts.pory"
	removeitem ITEM_HERBAL_MIX, 1
# 89 "data/maps/RanchBarn/scripts.pory"
	goto BarnJasmine_EventHealMareep
	goto BarnJasmineEvent_1

BarnJasmineEvent_41:
# 106 "data/maps/RanchBarn/scripts.pory"
	removeitem ITEM_HERBAL_MIX, 1
# 107 "data/maps/RanchBarn/scripts.pory"
	goto BarnJasmine_EventHealMareep
	goto BarnJasmineEvent_1

BarnJasmineEvent_44:
# 124 "data/maps/RanchBarn/scripts.pory"
	removeitem ITEM_HERBAL_MIX, 1
# 125 "data/maps/RanchBarn/scripts.pory"
	goto BarnJasmine_EventHealMareep
	goto BarnJasmineEvent_1

BarnJasmineEvent_48:
# 141 "data/maps/RanchBarn/scripts.pory"
	removeitem ITEM_HERBAL_MIX, 1
# 142 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_HeresTheMedicine, MSGBOX_DEFAULT
# 143 "data/maps/RanchBarn/scripts.pory"
	goto BarnJasmine_EventHealMareep
	goto BarnJasmineEvent_47

BarnJasmineEvent_50:
# 155 "data/maps/RanchBarn/scripts.pory"
	goto_if_set FLAG_VISITED_HERB_SHOP, BarnJasmineEvent_56
# 161 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_HaveYouChangedMind, MSGBOX_YESNO
BarnJasmineEvent_55:
# 163 "data/maps/RanchBarn/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BarnJasmineEvent_59
# 168 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_ThatsTooBad, MSGBOX_DEFAULT
	goto BarnJasmineEvent_1

BarnJasmineEvent_53:
# 146 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_WhereHerbalMix, MSGBOX_DEFAULT
# 147 "data/maps/RanchBarn/scripts.pory"
	giveitem ITEM_JASM_LETTER
# 148 "data/maps/RanchBarn/scripts.pory"
	waitse
# 149 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_DontFail, MSGBOX_DEFAULT
	goto BarnJasmineEvent_1

BarnJasmineEvent_56:
# 156 "data/maps/RanchBarn/scripts.pory"
	removeitem ITEM_HERBAL_MIX, 1
# 157 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_HeresTheMedicine, MSGBOX_DEFAULT
# 158 "data/maps/RanchBarn/scripts.pory"
	goto BarnJasmine_EventHealMareep
	goto BarnJasmineEvent_55

BarnJasmineEvent_59:
# 164 "data/maps/RanchBarn/scripts.pory"
	removeitem ITEM_HERBAL_MIX, 1
# 165 "data/maps/RanchBarn/scripts.pory"
	goto BarnJasmine_EventHealMareep
	goto BarnJasmineEvent_1


BarnJasmine_EventHealMareep::
# 189 "data/maps/RanchBarn/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 190 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_HandOverHerbalMix, MSGBOX_DEFAULT
# 191 "data/maps/RanchBarn/scripts.pory"
	waitfanfare
# 192 "data/maps/RanchBarn/scripts.pory"
	waitmessage
# 193 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_HealingMareep, MSGBOX_DEFAULT
# 194 "data/maps/RanchBarn/scripts.pory"
	waitmessage
# 195 "data/maps/RanchBarn/scripts.pory"
	closemessage
# 196 "data/maps/RanchBarn/scripts.pory"
	fadescreen FADE_TO_BLACK
# 197 "data/maps/RanchBarn/scripts.pory"
	playfanfare MUS_HEAL
# 198 "data/maps/RanchBarn/scripts.pory"
	waitfanfare
# 199 "data/maps/RanchBarn/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 200 "data/maps/RanchBarn/scripts.pory"
	goto_if_set FLAG_VOLKNER_HELPED, BarnJasmine_EventHealMareep_1
# 209 "data/maps/RanchBarn/scripts.pory"
	setflag FLAG_JASMINE_HELPED
# 210 "data/maps/RanchBarn/scripts.pory"
	goto_if_set FLAG_VOLKNER_MET, BarnJasmine_EventHealMareep_5
# 214 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_QuestComplete2, MSGBOX_DEFAULT
BarnJasmine_EventHealMareep_4:
# 216 "data/maps/RanchBarn/scripts.pory"
	waitmessage
# 217 "data/maps/RanchBarn/scripts.pory"
	closemessage
# 218 "data/maps/RanchBarn/scripts.pory"
	release
	end

BarnJasmine_EventHealMareep_1:
# 201 "data/maps/RanchBarn/scripts.pory"
	call Ranch_QuestFlagsComplete
# 202 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_QuestComplete, MSGBOX_DEFAULT
# 203 "data/maps/RanchBarn/scripts.pory"
	waitmessage
# 204 "data/maps/RanchBarn/scripts.pory"
	closemessage
# 205 "data/maps/RanchBarn/scripts.pory"
	release
	end

BarnJasmine_EventHealMareep_5:
# 211 "data/maps/RanchBarn/scripts.pory"
	msgbox BarnJasmine_QuestComplete, MSGBOX_DEFAULT
	goto BarnJasmine_EventHealMareep_4


BarnJugOfWater_Text_0:
# 15 "data/maps/RanchBarn/scripts.pory"
	.string "It's a jug full of water.$"

BarnHappyMareep_Text_0:
# 23 "data/maps/RanchBarn/scripts.pory"
	.string "Mareep: Baa!$"

BarnSadMareep_Text_0:
# 33 "data/maps/RanchBarn/scripts.pory"
	.string "Mareep: Baa…$"

BarnShearingBoy_Text_0:
# 42 "data/maps/RanchBarn/scripts.pory"
	.string "I'm supposed to be shearing this Mareep\nbut how can I do that when it won't\lstand still?$"

BarnConcernedGirl_Text_0:
# 52 "data/maps/RanchBarn/scripts.pory"
	.string "This li'l fella has fallen ill so we\nhad to quarantine it while we work on\lthe other one.$"

BarnJasmine_HeresTheMedicine::
# 223 "data/maps/RanchBarn/scripts.pory"
	.string "Jasmine: You're back already.\n"
	.string "Do you have the medicine?$"

BarnJasmine_HandOverHerbalMix::
# 228 "data/maps/RanchBarn/scripts.pory"
	.string "{PLAYER} handed the Herbal Mix\n"
	.string "to Jasmine.$"

BarnJasmine_HealingMareep::
# 232 "data/maps/RanchBarn/scripts.pory"
	.string "Jasmine: Thank you so much\n"
	.string "for your help.\p"
	.string "Now I just need to mix these herbs with\n"
	.string "some of this guy's favorite feed and…\p"
	.string "Mareep: B-Baa…!\p"
	.string "Jasmine: I know, it probably\n"
	.string "tastes awful…\l"
	.string "But still, I need you to swallow it…$"

BarnJasmine_QuestComplete::
# 242 "data/maps/RanchBarn/scripts.pory"
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
# 257 "data/maps/RanchBarn/scripts.pory"
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
# 274 "data/maps/RanchBarn/scripts.pory"
	.string "Jasmine: I need to stay here and\n"
	.string "monitor this little guy's condition.\p"
	.string "In the meanwhile, do you think\n"
	.string "you could go help Volkner out…?$"

BarnJasmine_StayForWhile::
# 281 "data/maps/RanchBarn/scripts.pory"
	.string "Jasmine: I still need to make sure\n"
	.string "this little guy is okay.\p"
	.string "After that I need to move on to the\n"
	.string "next patient…\p"
	.string "I might be staying here for a while.$"

JasmineBarn_FirstMeeting::
# 289 "data/maps/RanchBarn/scripts.pory"
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
# 318 "data/maps/RanchBarn/scripts.pory"
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
# 348 "data/maps/RanchBarn/scripts.pory"
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
# 378 "data/maps/RanchBarn/scripts.pory"
	.string "Oh, but I notice you are already\n"
	.string "carrying some Herbal Mix…\p"
	.string "Would you be willing to part with it\n"
	.string "so I may help this Mareep at once?\p"
	.string "You can still take that purse to the\n"
	.string "herb shop afterwards and\l"
	.string "receive a new batch in return…$"

BarnJasmine_ThatsTooBad::
# 388 "data/maps/RanchBarn/scripts.pory"
	.string "I understand…\p"
	.string "Well, do let me know if you change\n"
	.string "your mind or have visited\l"
	.string "the herb shop to get another batch…$"

BarnJasmine_HaveYouChangedMind::
# 395 "data/maps/RanchBarn/scripts.pory"
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
# 407 "data/maps/RanchBarn/scripts.pory"
	.string "Jasmine: I need to stay and monitor\n"
	.string "this pal's condition…\p"
	.string "Could you please fetch the Herbal Mix\n"
	.string "from Azuretide Town's herb shop…?$"

BarnJasmine_WhereHerbalMix::
# 414 "data/maps/RanchBarn/scripts.pory"
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
# 427 "data/maps/RanchBarn/scripts.pory"
	.string "Jasmine: Please…\n"
	.string "This is really urgent…$"
