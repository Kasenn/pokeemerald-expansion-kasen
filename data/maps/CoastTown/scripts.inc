CoastTown_MapScripts::
# 2 "data/maps/CoastTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CoastTown_Visited
	.byte 0


CoastTown_Visited::
# 6 "data/maps/CoastTown/scripts.pory"
	setflag FLAG_VISITED_AZURETIDE
	end


CoastTown_Sign1::
# 11 "data/maps/CoastTown/scripts.pory"
	msgbox CoastTown_Sign1_Text_0, MSGBOX_SIGN
	end


CoastTown_Sign2::
# 16 "data/maps/CoastTown/scripts.pory"
	msgbox CoastTown_Sign2_Text_0, MSGBOX_SIGN
	end


CoastTown_Sign3::
# 21 "data/maps/CoastTown/scripts.pory"
	msgbox CoastTown_Sign3_Text_0, MSGBOX_SIGN
	end


CoastTown_Sign4::
# 26 "data/maps/CoastTown/scripts.pory"
	msgbox CoastTown_Sign4_Text_0, MSGBOX_SIGN
	end


CoastTown_OldWoman::
# 31 "data/maps/CoastTown/scripts.pory"
	lockall
# 32 "data/maps/CoastTown/scripts.pory"
	faceplayer
# 33 "data/maps/CoastTown/scripts.pory"
	msgbox CoastTown_OldWoman_Text_0, MSGBOX_NPC
# 34 "data/maps/CoastTown/scripts.pory"
	waitmessage
# 35 "data/maps/CoastTown/scripts.pory"
	closemessage
# 36 "data/maps/CoastTown/scripts.pory"
	release
	end


CoastTown_OldMan::
# 41 "data/maps/CoastTown/scripts.pory"
	lockall
# 42 "data/maps/CoastTown/scripts.pory"
	faceplayer
# 43 "data/maps/CoastTown/scripts.pory"
	msgbox CoastTown_OldMan_Text_0, MSGBOX_NPC
# 44 "data/maps/CoastTown/scripts.pory"
	waitmessage
# 45 "data/maps/CoastTown/scripts.pory"
	closemessage
# 46 "data/maps/CoastTown/scripts.pory"
	release
	end


Azuretide_Mart_OldWoman::
# 51 "data/maps/CoastTown/scripts.pory"
	msgbox Azuretide_Mart_OldWoman_Text, MSGBOX_NPC
	return


CoastTown_FatGuy::
# 62 "data/maps/CoastTown/scripts.pory"
	lockall
# 63 "data/maps/CoastTown/scripts.pory"
	faceplayer
# 64 "data/maps/CoastTown/scripts.pory"
	msgbox CoastTown_FatGuy_Text_0, MSGBOX_NPC
# 65 "data/maps/CoastTown/scripts.pory"
	waitmessage
# 66 "data/maps/CoastTown/scripts.pory"
	closemessage
# 67 "data/maps/CoastTown/scripts.pory"
	release
	end


CoastTown_FatGuy2::
# 72 "data/maps/CoastTown/scripts.pory"
	lockall
# 73 "data/maps/CoastTown/scripts.pory"
	faceplayer
# 74 "data/maps/CoastTown/scripts.pory"
	goto_if_unset FLAG_AZURETIDE_HONEY, CoastTown_FatGuy2_2
# 87 "data/maps/CoastTown/scripts.pory"
	msgbox FatGuyHoneyGivenAlready, MSGBOX_NPC
# 88 "data/maps/CoastTown/scripts.pory"
	waitmessage
# 89 "data/maps/CoastTown/scripts.pory"
	closemessage
# 90 "data/maps/CoastTown/scripts.pory"
	release
	end

CoastTown_FatGuy2_2:
# 75 "data/maps/CoastTown/scripts.pory"
	msgbox FatGuyHoneyIntro, MSGBOX_NPC
	checkitemspace ITEM_HONEY, 3
# 0 "data/maps/CoastTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CoastTown_FatGuy2_5
CoastTown_FatGuy2_4:
# 79 "data/maps/CoastTown/scripts.pory"
	giveitem ITEM_HONEY, 3
# 80 "data/maps/CoastTown/scripts.pory"
	msgbox FatGuyHoneyGiven, MSGBOX_NPC
# 81 "data/maps/CoastTown/scripts.pory"
	setflag FLAG_AZURETIDE_HONEY
# 82 "data/maps/CoastTown/scripts.pory"
	waitmessage
# 83 "data/maps/CoastTown/scripts.pory"
	closemessage
# 84 "data/maps/CoastTown/scripts.pory"
	release
	end

CoastTown_FatGuy2_5:
# 77 "data/maps/CoastTown/scripts.pory"
	goto ZeBagIsFull
	goto CoastTown_FatGuy2_4


CoastTown_LittleGirl::
# 119 "data/maps/CoastTown/scripts.pory"
	msgbox CoastTown_LittleGirl_Text_0, MSGBOX_NPC
# 120 "data/maps/CoastTown/scripts.pory"
	closemessage
	end


CoastTown_Triathlete::
# 125 "data/maps/CoastTown/scripts.pory"
	msgbox CoastTown_Triathlete_Text_0, MSGBOX_NPC
# 126 "data/maps/CoastTown/scripts.pory"
	closemessage
	end


CoastTown_Swimmer::
# 131 "data/maps/CoastTown/scripts.pory"
	msgbox CoastTown_Swimmer_Text_0, MSGBOX_NPC
	return


AzureTide_MysteryWoman::
# 135 "data/maps/CoastTown/scripts.pory"
	lock
# 136 "data/maps/CoastTown/scripts.pory"
	goto_if_set FLAG_TEMP_3, AzureTide_MysteryWoman_2
# 141 "data/maps/CoastTown/scripts.pory"
	msgbox AzureTide_MysteryWoman_Text, MSGBOX_DEFAULT
# 142 "data/maps/CoastTown/scripts.pory"
	faceplayer
# 143 "data/maps/CoastTown/scripts.pory"
	msgbox AzureTide_MysteryWoman_Text2, MSGBOX_YESNO
AzureTide_MysteryWoman_1:
# 145 "data/maps/CoastTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AzureTide_MysteryWoman_6
# 152 "data/maps/CoastTown/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, AzureTide_MysteryWoman_10
# 157 "data/maps/CoastTown/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, AzureTide_MysteryWoman_13
# 162 "data/maps/CoastTown/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, AzureTide_MysteryWoman_16
# 167 "data/maps/CoastTown/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, AzureTide_MysteryWoman_18
	end

AzureTide_MysteryWoman_2:
# 137 "data/maps/CoastTown/scripts.pory"
	faceplayer
# 138 "data/maps/CoastTown/scripts.pory"
	msgbox AzureTide_MysteryWoman_TextShort, MSGBOX_YESNO
	goto AzureTide_MysteryWoman_1

AzureTide_MysteryWoman_6:
# 146 "data/maps/CoastTown/scripts.pory"
	msgbox AzureTide_MysteryWoman_Decline, MSGBOX_NPC
# 147 "data/maps/CoastTown/scripts.pory"
	setflag FLAG_TEMP_3
# 148 "data/maps/CoastTown/scripts.pory"
	turnobject 7, DIR_WEST
	end

AzureTide_MysteryWoman_10:
# 153 "data/maps/CoastTown/scripts.pory"
	msgbox AzureTide_MysteryWoman_Get6Badges, MSGBOX_NPC
# 154 "data/maps/CoastTown/scripts.pory"
	turnobject 7, DIR_WEST
	end

AzureTide_MysteryWoman_13:
# 158 "data/maps/CoastTown/scripts.pory"
	msgbox AzureTide_MysteryWoman_3Badges, MSGBOX_NPC
# 159 "data/maps/CoastTown/scripts.pory"
	turnobject 7, DIR_WEST
	end

AzureTide_MysteryWoman_16:
# 163 "data/maps/CoastTown/scripts.pory"
	msgbox AzureTide_MysteryWoman_2Badges, MSGBOX_NPC
# 164 "data/maps/CoastTown/scripts.pory"
	turnobject 7, DIR_WEST
	end

AzureTide_MysteryWoman_18:
# 168 "data/maps/CoastTown/scripts.pory"
	msgbox AzureTide_MysteryWoman_1Badges, MSGBOX_NPC
# 169 "data/maps/CoastTown/scripts.pory"
	turnobject 7, DIR_WEST
	end


Azuretide_HoneyTree::
# 239 "data/maps/CoastTown/scripts.pory"
	lockall
# 240 "data/maps/CoastTown/scripts.pory"
	goto_if_unset FLAG_AZURETIDE_HONEY, Azuretide_HoneyTree_2
# 247 "data/maps/CoastTown/scripts.pory"
	checkitem ITEM_HONEY, 1
# 248 "data/maps/CoastTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Azuretide_HoneyTree_4
# 299 "data/maps/CoastTown/scripts.pory"
	msgbox HoneyTree_NoHoney, MSGBOX_SIGN
# 300 "data/maps/CoastTown/scripts.pory"
	waitmessage
# 301 "data/maps/CoastTown/scripts.pory"
	closemessage
# 302 "data/maps/CoastTown/scripts.pory"
	release
	end

Azuretide_HoneyTree_2:
# 241 "data/maps/CoastTown/scripts.pory"
	msgbox Azuretide_HoneyTree_Text_0, MSGBOX_DEFAULT
# 242 "data/maps/CoastTown/scripts.pory"
	waitmessage
# 243 "data/maps/CoastTown/scripts.pory"
	closemessage
# 244 "data/maps/CoastTown/scripts.pory"
	release
	end

Azuretide_HoneyTree_4:
# 250 "data/maps/CoastTown/scripts.pory"
	msgbox HoneyTree_YesHoney, MSGBOX_YESNO
# 251 "data/maps/CoastTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Azuretide_HoneyTree_7
# 292 "data/maps/CoastTown/scripts.pory"
	waitmessage
# 293 "data/maps/CoastTown/scripts.pory"
	closemessage
# 294 "data/maps/CoastTown/scripts.pory"
	release
	end

Azuretide_HoneyTree_7:
# 252 "data/maps/CoastTown/scripts.pory"
	msgbox HoneyUsedOnTree, MSGBOX_DEFAULT
# 253 "data/maps/CoastTown/scripts.pory"
	waitmessage
# 254 "data/maps/CoastTown/scripts.pory"
	closemessage
# 255 "data/maps/CoastTown/scripts.pory"
	removeitem ITEM_HONEY, 1
# 256 "data/maps/CoastTown/scripts.pory"
	random 10
# 257 "data/maps/CoastTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Azuretide_HoneyTree_11
Azuretide_HoneyTree_10:
# 260 "data/maps/CoastTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Azuretide_HoneyTree_14
Azuretide_HoneyTree_13:
# 263 "data/maps/CoastTown/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Azuretide_HoneyTree_17
Azuretide_HoneyTree_16:
# 266 "data/maps/CoastTown/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Azuretide_HoneyTree_20
Azuretide_HoneyTree_19:
# 269 "data/maps/CoastTown/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Azuretide_HoneyTree_23
Azuretide_HoneyTree_22:
# 272 "data/maps/CoastTown/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Azuretide_HoneyTree_26
Azuretide_HoneyTree_25:
# 275 "data/maps/CoastTown/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Azuretide_HoneyTree_29
Azuretide_HoneyTree_28:
# 278 "data/maps/CoastTown/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq Azuretide_HoneyTree_32
Azuretide_HoneyTree_31:
# 281 "data/maps/CoastTown/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq Azuretide_HoneyTree_35
Azuretide_HoneyTree_34:
# 284 "data/maps/CoastTown/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq Azuretide_HoneyTree_38
Azuretide_HoneyTree_37:
# 287 "data/maps/CoastTown/scripts.pory"
	dowildbattle
# 288 "data/maps/CoastTown/scripts.pory"
	release
	end

Azuretide_HoneyTree_11:
# 258 "data/maps/CoastTown/scripts.pory"
	setwildbattle SPECIES_VENONAT, 7
	goto Azuretide_HoneyTree_10

Azuretide_HoneyTree_14:
# 261 "data/maps/CoastTown/scripts.pory"
	setwildbattle SPECIES_VENONAT, 7
	goto Azuretide_HoneyTree_13

Azuretide_HoneyTree_17:
# 264 "data/maps/CoastTown/scripts.pory"
	setwildbattle SPECIES_VENONAT, 8
	goto Azuretide_HoneyTree_16

Azuretide_HoneyTree_20:
# 267 "data/maps/CoastTown/scripts.pory"
	setwildbattle SPECIES_SKWOVET, 7
	goto Azuretide_HoneyTree_19

Azuretide_HoneyTree_23:
# 270 "data/maps/CoastTown/scripts.pory"
	setwildbattle SPECIES_SKWOVET, 7
	goto Azuretide_HoneyTree_22

Azuretide_HoneyTree_26:
# 273 "data/maps/CoastTown/scripts.pory"
	setwildbattle SPECIES_SKWOVET, 8
	goto Azuretide_HoneyTree_25

Azuretide_HoneyTree_29:
# 276 "data/maps/CoastTown/scripts.pory"
	setwildbattle SPECIES_SKWOVET, 8
	goto Azuretide_HoneyTree_28

Azuretide_HoneyTree_32:
# 279 "data/maps/CoastTown/scripts.pory"
	setwildbattle SPECIES_APPLIN, 7
	goto Azuretide_HoneyTree_31

Azuretide_HoneyTree_35:
# 282 "data/maps/CoastTown/scripts.pory"
	setwildbattle SPECIES_APPLIN, 8
	goto Azuretide_HoneyTree_34

Azuretide_HoneyTree_38:
# 285 "data/maps/CoastTown/scripts.pory"
	setwildbattle SPECIES_MUNCHLAX, 8
	goto Azuretide_HoneyTree_37


Azuretide_Ampharos::
# 324 "data/maps/CoastTown/scripts.pory"
	lock
# 325 "data/maps/CoastTown/scripts.pory"
	faceplayer
# 326 "data/maps/CoastTown/scripts.pory"
	waitse
# 327 "data/maps/CoastTown/scripts.pory"
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
# 328 "data/maps/CoastTown/scripts.pory"
	waitmoncry
# 329 "data/maps/CoastTown/scripts.pory"
	msgbox AmphyPoints, MSGBOX_YESNO
# 330 "data/maps/CoastTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Azuretide_Ampharos_2
# 334 "data/maps/CoastTown/scripts.pory"
	setvar VAR_RANCH_AMPHAROS, 1
# 335 "data/maps/CoastTown/scripts.pory"
	warp MAP_ROUTE3, 91, 16
# 336 "data/maps/CoastTown/scripts.pory"
	waitstate
	end

Azuretide_Ampharos_2:
# 331 "data/maps/CoastTown/scripts.pory"
	release
	end


CoastTown_Sign1_Text_0:
# 11 "data/maps/CoastTown/scripts.pory"
	.string "Azuretide Harbor$"

CoastTown_Sign2_Text_0:
# 16 "data/maps/CoastTown/scripts.pory"
	.string "Treasure Hunter's house$"

CoastTown_Sign3_Text_0:
# 21 "data/maps/CoastTown/scripts.pory"
	.string "AZURETIDE TOWN\p“Where the land ends and the\nsea begins.”$"

CoastTown_Sign4_Text_0:
# 26 "data/maps/CoastTown/scripts.pory"
	.string "Azuretide Herb Shop$"

CoastTown_OldWoman_Text_0:
# 33 "data/maps/CoastTown/scripts.pory"
	.string "There's been a lot of trainers coming\nhere via the ferry recently.\pShame many of them are in a hurry and\ndon't even care to say hello.$"

CoastTown_OldMan_Text_0:
# 43 "data/maps/CoastTown/scripts.pory"
	.string "For the city folk our way of living\nmay seem simple but that's\ljust the way we like it.$"

CoastTown_FatGuy_Text_0:
# 64 "data/maps/CoastTown/scripts.pory"
	.string "My friend told me she saw a wild Pokémon\nin one of these trees recently.\pI've been shaking these trees for\nhours yet I've found zilch.$"

CoastTown_LittleGirl_Text_0:
# 119 "data/maps/CoastTown/scripts.pory"
	.string "I'm looking for hidden treasure!\nWish I had an Itemfinder…$"

CoastTown_Triathlete_Text_0:
# 125 "data/maps/CoastTown/scripts.pory"
	.string "No time to talk,\nI'm practicing for a triathlon.\pRunning in sand is tough but I'm sure\nit improves my running technique.$"

CoastTown_Swimmer_Text_0:
# 131 "data/maps/CoastTown/scripts.pory"
	.string "Eek!\pSomething wriggly just touched my leg!$"

Azuretide_HoneyTree_Text_0:
# 241 "data/maps/CoastTown/scripts.pory"
	.string "It's a peculiar looking tree.$"

Azuretide_Mart_OldWoman_Text::
# 53 "data/maps/CoastTown/scripts.pory"
	.string "Make sure you're always stocked up\n"
	.string "on Antidotes.\p"
	.string "Nothing feels worse than running back\n"
	.string "to a Pokémon Center because your\l"
	.string "Pokémon got poisoned.$"

FatGuyHoneyIntro::
# 94 "data/maps/CoastTown/scripts.pory"
	.string "These types of trees are\n"
	.string "known as honey trees.\p"
	.string "By slathering some honey on its bark,\n"
	.string "you can attract Pokémon that would\l"
	.string "normally be too skittish to appear.\p"
	.string "Why don't you give it a try?$"

FatGuyHoneyGiven::
# 103 "data/maps/CoastTown/scripts.pory"
	.string "Just slather some of that honey and\n"
	.string "it should cause some Pokémon to\l"
	.string "appear without delay.\p"
	.string "There are more trees like this out\n"
	.string "there in the world and many of them\l"
	.string "should be able to attract an entirely\l"
	.string "different set of Pokémon.$"

FatGuyHoneyGivenAlready::
# 113 "data/maps/CoastTown/scripts.pory"
	.string "Go on, try using some of\n"
	.string "that honey on this tree.$"

AzureTide_MysteryWoman_Text::
# 175 "data/maps/CoastTown/scripts.pory"
	.string "How many years has it been since\n"
	.string "we last visited It?\p"
	.string "I bet those old geezers completely\n"
	.string "forgot It!\p"
	.string "… … … …$"

AzureTide_MysteryWoman_Text2::
# 182 "data/maps/CoastTown/scripts.pory"
	.string "Oh!\p"
	.string "Don't surprise the elderly by\n"
	.string "sneaking up on them like that!\p"
	.string "Wait… You are a trainer, yes?\p"
	.string "And you just arrived from\n"
	.string "Coralgrove Archipelago?\l"
	.string "I wonder…\l"
	.string "You!\l"
	.string "Yes, you!\p"
	.string "Would you care for a little bout?\n"
	.string "I'm very much interested to see\l"
	.string "how you battle.$"

AzureTide_MysteryWoman_Decline::
# 196 "data/maps/CoastTown/scripts.pory"
	.string "Hmph…\p"
	.string "Well, I won't force you if you\n"
	.string "don't feel like it.$"

AzureTide_MysteryWoman_TextShort::
# 201 "data/maps/CoastTown/scripts.pory"
	.string "You're back. Care for\n"
	.string "a little bout?$"

AzureTide_MysteryWoman_Get6Badges::
# 205 "data/maps/CoastTown/scripts.pory"
	.string "I know you're probably curious to see\n"
	.string "just how strong of a trainer I am.\p"
	.string "However, to even stand a chance\n"
	.string "against me, I'd say you need\l"
	.string "around 6 badges!$"

AzureTide_MysteryWoman_3Badges::
# 212 "data/maps/CoastTown/scripts.pory"
	.string "Actually, I think we may have to\n"
	.string "postpone the battle.\p"
	.string "You only have 3 Gym Badges and\n"
	.string "I'm a pretty strong trainer.\p"
	.string "Get a couple more and then\n"
	.string "get back to me.$"

AzureTide_MysteryWoman_2Badges::
# 220 "data/maps/CoastTown/scripts.pory"
	.string "Now that I think about it,\n"
	.string "you're still probably a rookie.\p"
	.string "Why, I bet you don't have more\n"
	.string "than 2 Gym Badges.\p"
	.string "Tell you what, get a few more\n"
	.string "Badges and then come back to me.$"

AzureTide_MysteryWoman_1Badges::
# 228 "data/maps/CoastTown/scripts.pory"
	.string "Hm… Now that I think about it,\n"
	.string "since you just came from Coralgrove,\l"
	.string "you probably only have a single\l"
	.string "Gym Badge.\p"
	.string "I'm a pretty strong trainer so you\n"
	.string "should work on getting more Badges\l"
	.string "before taking on my challenge.$"

HoneyUsedOnTree::
# 307 "data/maps/CoastTown/scripts.pory"
	.string "You slather some honey on the tree…\p"
	.string "…\p"
	.string "…\p"
	.string "The honey lured in a wild Pokémon!$"

HoneyTree_NoHoney::
# 314 "data/maps/CoastTown/scripts.pory"
	.string "It's a honey tree.$"

HoneyTree_YesHoney::
# 318 "data/maps/CoastTown/scripts.pory"
	.string "It's a honey tree. Would you\n"
	.string "like to slather some honey on it?$"

AmphyPoints::
# 340 "data/maps/CoastTown/scripts.pory"
	.string "The Ampharos seems to be pointing\n"
	.string "towards the ranch and gesturing you\l"
	.string "to follow.\p"
	.string "Follow the Pokémon?$"
