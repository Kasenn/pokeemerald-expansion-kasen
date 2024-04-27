Sandstone_LargeHouse1_1F_MapScripts::
	.byte 0


Sandstone_BigHouse1_2F_Child1::
	lock
	msgbox Sandstone_BigHouse1_2F_Child1_Text
	release
	end


Sandstone_BigHouse1_2F_Child2::
	lock
	msgbox Sandstone_BigHouse1_2F_Child2_Text
	release
	end


Sandstone_BigHouse1_2F_Mother::
	msgbox Sandstone_BigHouse1_2F_Mother_Text, MSGBOX_NPC
	end


Sandstone_BigHouse1_1F_Pokefan::
	msgbox Sandstone_BigHouse1_1F_Pokefan_Text, MSGBOX_NPC
	end


Sandstone_BigHouse1_1F_OldMan::
	msgbox Sandstone_BigHouse1_1F_OldMan_Text, MSGBOX_NPC
	end


Sandstone_BigHouse1_1F_OldWoman::
	goto_if_set FLAG_SANDSTONE_LAVACOOKIE, Sandstone_BigHouse1_1F_OldWoman_2
	lock
	faceplayer
	msgbox HaveACookie
	checkitemspace ITEM_LAVA_COOKIE
	compare VAR_RESULT, FALSE
	goto_if_eq Sandstone_BigHouse1_1F_OldWoman_5
	giveitem ITEM_LAVA_COOKIE
	waitfanfare
	setflag FLAG_SANDSTONE_LAVACOOKIE
	release
	closemessage
	end

Sandstone_BigHouse1_1F_OldWoman_2:
	msgbox Sandstone_BigHouse1_1F_OldWoman_Text, MSGBOX_NPC
	end

Sandstone_BigHouse1_1F_OldWoman_5:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


Sandstone_BigHouse1_1F_Youngster::
	lockall
	faceplayer
	goto_if_set FLAG_TRADED_SMEARGLE, Sandstone_BigHouse1_1F_Youngster_2
	setvar VAR_0x8008, INGAME_TRADE_SMEARGLE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
	msgbox WantToTradeSmeargle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SmeargleTradeDecline
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SmeargleTradeDecline
	copyvar VAR_0x8005, VAR_0x8004
	specialvar VAR_RESULT, GetTradeSpecies
	goto_if_ne VAR_RESULT, VAR_0x8009, SmeargleNotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox SmeargleTradeThanks, MSGBOX_DEFAULT
	setflag FLAG_TRADED_SMEARGLE
	release
	end

Sandstone_BigHouse1_1F_Youngster_2:
	msgbox SmeargleTraded, MSGBOX_NPC
	end


SmeargleTradeDecline::
	msgbox SmeargleTradeDeclineText, MSGBOX_NPC
	end


SmeargleNotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox SmeargleWrongMonText, MSGBOX_NPC
	end


Aldeleaf_Artist::
	goto_if_set FLAG_OBTAINED_PAINTBRUSH, Aldeleaf_Artist_2
	lock
	faceplayer
	goto_if_set FLAG_TEMP_2, Aldeleaf_Artist_5
Aldeleaf_Artist_4:
	msgbox Aldeleaf_Artist_Text
	checkpartymon SPECIES_SMEARGLE, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Aldeleaf_Artist_8
	playse SE_PIN
	applymovement 4, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 4, Common_Movement_Delay48
	waitmovement 0
	msgbox YouHaveSmeargle
	checkitemspace ITEM_PAINTBRUSH
	compare VAR_RESULT, FALSE
	goto_if_eq Aldeleaf_Artist_11
	goto GivePaintBrush
	return

Aldeleaf_Artist_2:
	msgbox ArtistAfterword, MSGBOX_NPC
	end

Aldeleaf_Artist_5:
	goto GivePaintBrush
	goto Aldeleaf_Artist_4

Aldeleaf_Artist_8:
	release
	end

Aldeleaf_Artist_11:
	msgbox NotEnoughRoom, MSGBOX_NPC
	setflag FLAG_TEMP_2
	end


GivePaintBrush::
	giveitem ITEM_PAINTBRUSH
	waitfanfare
	msgbox GiveToSmeargle, MSGBOX_NPC
	setflag FLAG_OBTAINED_PAINTBRUSH
	end


Sandstone_BigHouse1_2F_Child1_Text::
	.string "Swablu! Use Fly!$"

Sandstone_BigHouse1_2F_Child2_Text::
	.string "Azurill! Bubble, now!$"

Sandstone_BigHouse1_2F_Mother_Text::
	.string "Those two are so passionate in their\n"
	.string "play, I bet they'll become amazing\l"
	.string "trainers when they grow up.$"

Sandstone_BigHouse1_1F_Pokefan_Text::
	.string "Back in my youth I yearned to become\n"
	.string "the greatest Pokémon trainer there was.\p"
	.string "I never managed to defeat a single\n"
	.string "Gym Leader, so I decided to become\l"
	.string "a family man instead.$"

Sandstone_BigHouse1_1F_OldMan_Text::
	.string "You should go visit your family once\n"
	.string "in a while.\p"
	.string "Adventures can be fun, but I'm sure\n"
	.string "your parents must miss you.$"

Sandstone_BigHouse1_1F_OldWoman_Text::
	.string "Stay safe on your travels.$"

HaveACookie::
	.string "Well aren't you a cutie. Here,\n"
	.string "have a cookie.$"

SmeargleTraded::
	.string "This Rockruff is even cooler from\n"
	.string "up close!$"

SmeargleTradeThanks::
	.string "Oh cool! I finally got a Rockruff!\n"
	.string "Thank you so much!$"

SmeargleTradeDeclineText::
	.string "Let me know if you change your mind.$"

WantToTradeSmeargle::
	.string "I'm so bored!\p"
	.string "All the adults do nothing but talk with\n"
	.string "each other and my younger siblings are\l"
	.string "no fun either.\p"
	.string "Do you want to like, trade Pokémon or\n"
	.string "something?\p"
	.string "I've got this cool Pokémon called\n"
	.string "Smeargle. Maybe trade it to something\l"
	.string "like, oh I don't know, a Rockruff?$"

SmeargleWrongMonText::
	.string "I don't know what kind of game you're\n"
	.string "trying to play, but that's clearly not\l"
	.string "a {STR_VAR_1}.$"

Aldeleaf_Artist_Text::
	.string "Among artists like myself, this museum\n"
	.string "is an inspiration.\p"
	.string "I wonder, are there any Pokémon that\n"
	.string "could be seen as artists?\l"
	.string "I would very much like to see one.$"

GiveToSmeargle::
	.string "If a Smeargle holds that Paintbrush,\n"
	.string "both of its Attack stats will increase\l"
	.string "massively, allowing its works of art to\l"
	.string "really make an impact.$"

YouHaveSmeargle::
	.string "Why that Smeargle of yours is a\n"
	.string "natural-born artist.\p"
	.string "Here, try giving it this.$"

ArtistAfterword::
	.string "A painter is nothing without their\n"
	.string "tools.\p"
	.string "Give that Paintbrush to a Smeargle\n"
	.string "and witness the impact of makes on\l"
	.string "its art.$"
