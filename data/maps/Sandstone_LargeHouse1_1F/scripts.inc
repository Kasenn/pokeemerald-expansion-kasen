Sandstone_LargeHouse1_1F_MapScripts::
	.byte 0


Sandstone_BigHouse1_2F_Child1::
# 4 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	lock
# 5 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	msgbox Sandstone_BigHouse1_2F_Child1_Text
# 6 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	release
	end


Sandstone_BigHouse1_2F_Child2::
# 10 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	lock
# 11 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	msgbox Sandstone_BigHouse1_2F_Child2_Text
# 12 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	release
	end


Sandstone_BigHouse1_2F_Mother::
# 16 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	msgbox Sandstone_BigHouse1_2F_Mother_Text, MSGBOX_NPC
	end


Sandstone_BigHouse1_1F_Pokefan::
# 20 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	msgbox Sandstone_BigHouse1_1F_Pokefan_Text, MSGBOX_NPC
	end


Sandstone_BigHouse1_1F_OldMan::
# 24 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	msgbox Sandstone_BigHouse1_1F_OldMan_Text, MSGBOX_NPC
	end


Sandstone_BigHouse1_1F_OldWoman::
# 28 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	goto_if_set FLAG_SANDSTONE_LAVACOOKIE, Sandstone_BigHouse1_1F_OldWoman_2
# 32 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	lock
# 33 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	faceplayer
# 34 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	msgbox HaveACookie
	checkitemspace ITEM_LAVA_COOKIE
# 0 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Sandstone_BigHouse1_1F_OldWoman_5
Sandstone_BigHouse1_1F_OldWoman_4:
# 38 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 39 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	waitfanfare
# 40 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	setflag FLAG_SANDSTONE_LAVACOOKIE
# 41 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	release
# 42 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	closemessage
	end

Sandstone_BigHouse1_1F_OldWoman_2:
# 29 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	msgbox Sandstone_BigHouse1_1F_OldWoman_Text, MSGBOX_NPC
	end

Sandstone_BigHouse1_1F_OldWoman_5:
# 36 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	goto ZeBagIsFull
	goto Sandstone_BigHouse1_1F_OldWoman_4


Sandstone_BigHouse1_1F_Youngster::
# 80 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	lock
# 81 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	faceplayer
# 82 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	goto_if_set FLAG_TRADED_SMEARGLE, Sandstone_BigHouse1_1F_Youngster_2
# 86 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SMEARGLE
# 87 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 88 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 89 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	msgbox WantToTradeSmeargle, MSGBOX_YESNO
# 90 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SmeargleTradeDecline
# 91 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	special ChoosePartyMon
# 92 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	waitstate
# 93 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SmeargleTradeDecline
# 94 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 95 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 96 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, SmeargleNotRequestedMon
# 97 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 98 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	special CreateInGameTradePokemon
# 99 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	special DoInGameTradeScene
# 100 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	waitstate
# 101 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	msgbox SmeargleTradeThanks, MSGBOX_DEFAULT
# 102 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	setflag FLAG_TRADED_SMEARGLE
# 103 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	release
	end

Sandstone_BigHouse1_1F_Youngster_2:
# 83 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	msgbox SmeargleTraded, MSGBOX_NPC
	end


SmeargleTradeDecline::
# 108 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	msgbox SmeargleTradeDeclineText, MSGBOX_NPC
	end


SmeargleNotRequestedMon::
# 113 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 114 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	msgbox SmeargleWrongMonText, MSGBOX_NPC
	end


Aldeleaf_Artist::
# 147 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	goto_if_set FLAG_OBTAINED_PAINTBRUSH, Aldeleaf_Artist_2
# 151 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	lock
# 152 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	faceplayer
# 153 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, Aldeleaf_Artist_5
Aldeleaf_Artist_4:
# 156 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	msgbox Aldeleaf_Artist_Text
# 157 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	checkpartymon SPECIES_SMEARGLE, 0
# 158 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Aldeleaf_Artist_8
# 166 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	playse SE_PIN
# 167 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	safefollow
# 168 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 169 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	waitmovement 0
# 170 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	applymovement 4, Common_Movement_Delay48
# 171 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	waitmovement 0
# 172 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	msgbox YouHaveSmeargle
	checkitemspace ITEM_PAINTBRUSH
# 0 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Aldeleaf_Artist_11
Aldeleaf_Artist_10:
# 177 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	goto GivePaintBrush
	return

Aldeleaf_Artist_2:
# 148 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	msgbox ArtistAfterword, MSGBOX_NPC
	end

Aldeleaf_Artist_5:
# 154 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	goto GivePaintBrush
	goto Aldeleaf_Artist_4

Aldeleaf_Artist_8:
# 159 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	release
# 160 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	goto_if_unset FLAG_Q06_MUSEUM_SMEARGLE_START, Aldeleaf_Artist_14
Aldeleaf_Artist_13:
	end

Aldeleaf_Artist_11:
# 174 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	setflag FLAG_TEMP_2
# 175 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	goto ZeBagIsFull
	goto Aldeleaf_Artist_10

Aldeleaf_Artist_14:
# 161 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	startquest FLAG_Q06_MUSEUM_SMEARGLE_START
# 162 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	special ShowJournalPopupAdd
	goto Aldeleaf_Artist_13


GivePaintBrush::
# 180 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	giveitem ITEM_PAINTBRUSH
# 181 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	waitfanfare
# 182 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	msgbox GiveToSmeargle, MSGBOX_NPC
# 183 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	setflag FLAG_OBTAINED_PAINTBRUSH
# 184 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	goto_if_set FLAG_Q06_MUSEUM_SMEARGLE_START, GivePaintBrush_2
GivePaintBrush_1:
	end

GivePaintBrush_2:
# 185 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	completequest FLAG_Q06_MUSEUM_SMEARGLE_COMPLETE
# 186 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	special ShowJournalPopupRemove
	goto GivePaintBrush_1


Sandstone_BigHouse1_2F_Child1_Text::
# 46 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	.string "Swablu! Use Fly!$"

Sandstone_BigHouse1_2F_Child2_Text::
# 49 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	.string "Azurill! Bubble, now!$"

Sandstone_BigHouse1_2F_Mother_Text::
# 52 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	.string "Those two are so passionate in their\n"
	.string "play, I bet they'll become amazing\l"
	.string "trainers when they grow up.$"

Sandstone_BigHouse1_1F_Pokefan_Text::
# 57 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	.string "Back in my youth, I yearned to become\n"
	.string "the greatest Pokémon trainer\l"
	.string "there ever was.\p"
	.string "I never managed to defeat a single\n"
	.string "Gym Leader, so I decided to become\l"
	.string "a family man instead.$"

Sandstone_BigHouse1_1F_OldMan_Text::
# 65 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	.string "You should go visit your family once\n"
	.string "in a while.\p"
	.string "Adventures can be fun, but I'm sure\n"
	.string "your parents must miss you.$"

Sandstone_BigHouse1_1F_OldWoman_Text::
# 71 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	.string "Stay safe on your travels.$"

HaveACookie::
# 74 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	.string "Well aren't you a cutie. Here,\n"
	.string "have a cookie.$"

SmeargleTraded::
# 118 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	.string "This Rockruff is even cooler from\n"
	.string "up close!$"

SmeargleTradeThanks::
# 122 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	.string "Oh cool! I finally got a Rockruff!\n"
	.string "Thank you so much!$"

SmeargleTradeDeclineText::
# 126 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	.string "Let me know if you change your mind.$"

WantToTradeSmeargle::
# 129 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
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
# 140 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	.string "I don't know what kind of game you're\n"
	.string "trying to play, but that's clearly not\l"
	.string "a {STR_VAR_1}.$"

Aldeleaf_Artist_Text::
# 191 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	.string "Among artists like myself, this museum\n"
	.string "is an inspiration.\p"
	.string "I wonder, are there any Pokémon that\n"
	.string "could be seen as artists?\l"
	.string "I would very much like to see one.$"

GiveToSmeargle::
# 198 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	.string "If a Smeargle holds that Paintbrush,\n"
	.string "both of its Attack stats will increase\l"
	.string "massively, allowing its works of art to\l"
	.string "really make an impact.$"

YouHaveSmeargle::
# 204 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	.string "Why that Smeargle of yours is a\n"
	.string "natural-born artist.\p"
	.string "Here, try giving it this.$"

ArtistAfterword::
# 209 "data/maps/Sandstone_LargeHouse1_1F/scripts.pory"
	.string "A painter is nothing without their\n"
	.string "tools.\p"
	.string "Give that Paintbrush to a Smeargle\n"
	.string "and witness the impact of makes on\l"
	.string "its art.$"
