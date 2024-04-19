Kaolisle_Hotel_5F_MapScripts::
	.byte 0


Room501::
	msgbox Room501_Text_0, MSGBOX_SIGN
	end


Room502::
	msgbox Room502_Text_0, MSGBOX_SIGN
	end


Room503::
	msgbox Room503_Text_0, MSGBOX_SIGN
	end


Room504::
	msgbox Room504_Text_0, MSGBOX_SIGN
	end


Kaolisle_Hotel_5F_BPShopBeauty::
	lock
	faceplayer
	compare VAR_BPBEAUTY_STATE, 2
	goto_if_eq Kaolisle_Hotel_5F_BPShopBeauty_2
	compare VAR_BPBEAUTY_STATE, 1
	goto_if_eq Kaolisle_Hotel_5F_BPShopBeauty_5
	call SetAndCheckHeartScaleMove
	msgbox Kaolisle_Hotel_5F_BPShopBeauty_Text, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Kaolisle_Hotel_5F_BPShopBeauty_8
	setvar VAR_BPBEAUTY_STATE, 1
	buffermovename STR_VAR_2, VAR_HEARTSCALEMOVE2
	msgbox WouldLikeToSeeMove, MSGBOX_NPC
	end

Kaolisle_Hotel_5F_BPShopBeauty_2:
	buffermovename STR_VAR_2, VAR_HEARTSCALEMOVE2
	msgbox WonderHowItLooks, MSGBOX_NPC
	end

Kaolisle_Hotel_5F_BPShopBeauty_5:
	call SetAndCheckHeartScaleMove
	buffermovename STR_VAR_2, VAR_HEARTSCALEMOVE2
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Kaolisle_Hotel_5F_BPShopBeauty_10
	bufferspeciesname STR_VAR_1, VAR_0x8004
	msgbox YourMonKnowsMove, MSGBOX_DEFAULT
	checkitemspace ITEM_HEART_SCALE
	compare VAR_RESULT, FALSE
	goto_if_eq Kaolisle_Hotel_5F_BPShopBeauty_14
	waitse
	giveitem ITEM_HEART_SCALE
	waitfanfare
	setvar VAR_BPBEAUTY_STATE, 2
	closemessage
	release
	end

Kaolisle_Hotel_5F_BPShopBeauty_8:
	msgbox Kaolisle_Hotel_5f_BPBeauty_Decline, MSGBOX_NPC
	end

Kaolisle_Hotel_5F_BPShopBeauty_10:
	msgbox WouldLikeToSeeMove, MSGBOX_NPC
	end

Kaolisle_Hotel_5F_BPShopBeauty_14:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


SetAndCheckHeartScaleMove::
	switch VAR_HEARTSCALEMOVE
	case 1, SetAndCheckHeartScaleMove_3
	case 2, SetAndCheckHeartScaleMove_4
	case 3, SetAndCheckHeartScaleMove_5
	case 4, SetAndCheckHeartScaleMove_6
	case 5, SetAndCheckHeartScaleMove_7
	case 6, SetAndCheckHeartScaleMove_8
	case 7, SetAndCheckHeartScaleMove_9
	case 8, SetAndCheckHeartScaleMove_10
	case 9, SetAndCheckHeartScaleMove_11
	case 10, SetAndCheckHeartScaleMove_12
	case 11, SetAndCheckHeartScaleMove_13
	case 12, SetAndCheckHeartScaleMove_14
	case 13, SetAndCheckHeartScaleMove_15
	case 14, SetAndCheckHeartScaleMove_16
	case 15, SetAndCheckHeartScaleMove_17
	case 16, SetAndCheckHeartScaleMove_18
	case 17, SetAndCheckHeartScaleMove_19
	case 18, SetAndCheckHeartScaleMove_20
	case 19, SetAndCheckHeartScaleMove_21
	case 20, SetAndCheckHeartScaleMove_22
	case 21, SetAndCheckHeartScaleMove_23
	case 22, SetAndCheckHeartScaleMove_24
	case 23, SetAndCheckHeartScaleMove_25
	case 24, SetAndCheckHeartScaleMove_26
	case 25, SetAndCheckHeartScaleMove_27
	case 26, SetAndCheckHeartScaleMove_28
	case 27, SetAndCheckHeartScaleMove_29
	case 28, SetAndCheckHeartScaleMove_30
	case 29, SetAndCheckHeartScaleMove_31
	case 30, SetAndCheckHeartScaleMove_32
	case 31, SetAndCheckHeartScaleMove_33
	case 32, SetAndCheckHeartScaleMove_34
	case 33, SetAndCheckHeartScaleMove_35
	case 34, SetAndCheckHeartScaleMove_36
	case 35, SetAndCheckHeartScaleMove_37
	case 36, SetAndCheckHeartScaleMove_38
	case 37, SetAndCheckHeartScaleMove_39
	case 38, SetAndCheckHeartScaleMove_40
	case 39, SetAndCheckHeartScaleMove_41
	case 40, SetAndCheckHeartScaleMove_42
	case 41, SetAndCheckHeartScaleMove_43
	case 42, SetAndCheckHeartScaleMove_44
	case 43, SetAndCheckHeartScaleMove_45
	case 44, SetAndCheckHeartScaleMove_46
	case 45, SetAndCheckHeartScaleMove_47
	case 46, SetAndCheckHeartScaleMove_48
	case 47, SetAndCheckHeartScaleMove_49
	case 48, SetAndCheckHeartScaleMove_50
	case 49, SetAndCheckHeartScaleMove_51
	case 50, SetAndCheckHeartScaleMove_52
SetAndCheckHeartScaleMove_1:
	return

SetAndCheckHeartScaleMove_3:
	setvar VAR_HEARTSCALEMOVE2, MOVE_SNORE
	checkpartymove MOVE_SNORE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_4:
	setvar VAR_HEARTSCALEMOVE2, MOVE_BIND
	checkpartymove MOVE_BIND
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_5:
	setvar VAR_HEARTSCALEMOVE2, MOVE_SHOCK_WAVE
	checkpartymove MOVE_SHOCK_WAVE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_6:
	setvar VAR_HEARTSCALEMOVE2, MOVE_BUG_BITE
	checkpartymove MOVE_BUG_BITE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_7:
	setvar VAR_HEARTSCALEMOVE2, MOVE_HEAL_BELL
	checkpartymove MOVE_HEAL_BELL
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_8:
	setvar VAR_HEARTSCALEMOVE2, MOVE_ELECTROWEB
	checkpartymove MOVE_ELECTROWEB
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_9:
	setvar VAR_HEARTSCALEMOVE2, MOVE_DEFOG
	checkpartymove MOVE_DEFOG
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_10:
	setvar VAR_HEARTSCALEMOVE2, MOVE_LOW_KICK
	checkpartymove MOVE_LOW_KICK
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_11:
	setvar VAR_HEARTSCALEMOVE2, MOVE_HELPING_HAND
	checkpartymove MOVE_HELPING_HAND
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_12:
	setvar VAR_HEARTSCALEMOVE2, MOVE_RECYCLE
	checkpartymove MOVE_RECYCLE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_13:
	setvar VAR_HEARTSCALEMOVE2, MOVE_DRILL_RUN
	checkpartymove MOVE_DRILL_RUN
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_14:
	setvar VAR_HEARTSCALEMOVE2, MOVE_BOUNCE
	checkpartymove MOVE_BOUNCE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_15:
	setvar VAR_HEARTSCALEMOVE2, MOVE_SIGNAL_BEAM
	checkpartymove MOVE_SIGNAL_BEAM
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_16:
	setvar VAR_HEARTSCALEMOVE2, MOVE_IRON_HEAD
	checkpartymove MOVE_IRON_HEAD
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_17:
	setvar VAR_HEARTSCALEMOVE2, MOVE_IRON_DEFENSE
	checkpartymove MOVE_IRON_DEFENSE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_18:
	setvar VAR_HEARTSCALEMOVE2, MOVE_MAGNET_RISE
	checkpartymove MOVE_MAGNET_RISE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_19:
	setvar VAR_HEARTSCALEMOVE2, MOVE_MAGIC_COAT
	checkpartymove MOVE_MAGIC_COAT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_20:
	setvar VAR_HEARTSCALEMOVE2, MOVE_KNOCK_OFF
	checkpartymove MOVE_KNOCK_OFF
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_21:
	setvar VAR_HEARTSCALEMOVE2, MOVE_SKILL_SWAP
	checkpartymove MOVE_SKILL_SWAP
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_22:
	setvar VAR_HEARTSCALEMOVE2, MOVE_ICY_WIND
	checkpartymove MOVE_ICY_WIND
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_23:
	setvar VAR_HEARTSCALEMOVE2, MOVE_WATER_PULSE
	checkpartymove MOVE_WATER_PULSE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_24:
	setvar VAR_HEARTSCALEMOVE2, MOVE_FURY_CUTTER
	checkpartymove MOVE_FURY_CUTTER
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_25:
	setvar VAR_HEARTSCALEMOVE2, MOVE_MAGIC_ROOM
	checkpartymove MOVE_MAGIC_ROOM
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_26:
	setvar VAR_HEARTSCALEMOVE2, MOVE_MUD_SLAP
	checkpartymove MOVE_MUD_SLAP
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_27:
	setvar VAR_HEARTSCALEMOVE2, MOVE_SWIFT
	checkpartymove MOVE_SWIFT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_28:
	setvar VAR_HEARTSCALEMOVE2, MOVE_FOUL_PLAY
	checkpartymove MOVE_FOUL_PLAY
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_29:
	setvar VAR_HEARTSCALEMOVE2, MOVE_GUNK_SHOT
	checkpartymove MOVE_GUNK_SHOT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_30:
	setvar VAR_HEARTSCALEMOVE2, MOVE_TRICK
	checkpartymove MOVE_TRICK
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_31:
	setvar VAR_HEARTSCALEMOVE2, MOVE_ANCIENT_POWER
	checkpartymove MOVE_ANCIENT_POWER
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_32:
	setvar VAR_HEARTSCALEMOVE2, MOVE_OMINOUS_WIND
	checkpartymove MOVE_OMINOUS_WIND
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_33:
	setvar VAR_HEARTSCALEMOVE2, MOVE_COVET
	checkpartymove MOVE_COVET
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_34:
	setvar VAR_HEARTSCALEMOVE2, MOVE_STRING_SHOT
	checkpartymove MOVE_STRING_SHOT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_35:
	setvar VAR_HEARTSCALEMOVE2, MOVE_BLOCK
	checkpartymove MOVE_BLOCK
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_36:
	setvar VAR_HEARTSCALEMOVE2, MOVE_SNATCH
	checkpartymove MOVE_SNATCH
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_37:
	setvar VAR_HEARTSCALEMOVE2, MOVE_UPROAR
	checkpartymove MOVE_UPROAR
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_38:
	setvar VAR_HEARTSCALEMOVE2, MOVE_WORRY_SEED
	checkpartymove MOVE_WORRY_SEED
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_39:
	setvar VAR_HEARTSCALEMOVE2, MOVE_STEALTH_ROCK
	checkpartymove MOVE_STEALTH_ROCK
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_40:
	setvar VAR_HEARTSCALEMOVE2, MOVE_SYNTHESIS
	checkpartymove MOVE_SYNTHESIS
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_41:
	setvar VAR_HEARTSCALEMOVE2, MOVE_ZEN_HEADBUTT
	checkpartymove MOVE_ZEN_HEADBUTT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_42:
	setvar VAR_HEARTSCALEMOVE2, MOVE_LAST_RESORT
	checkpartymove MOVE_LAST_RESORT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_43:
	setvar VAR_HEARTSCALEMOVE2, MOVE_THUNDER_WAVE
	checkpartymove MOVE_THUNDER_WAVE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_44:
	setvar VAR_HEARTSCALEMOVE2, MOVE_FIRE_PUNCH
	checkpartymove MOVE_FIRE_PUNCH
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_45:
	setvar VAR_HEARTSCALEMOVE2, MOVE_THUNDER_PUNCH
	checkpartymove MOVE_THUNDER_PUNCH
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_46:
	setvar VAR_HEARTSCALEMOVE2, MOVE_ICE_PUNCH
	checkpartymove MOVE_ICE_PUNCH
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_47:
	setvar VAR_HEARTSCALEMOVE2, MOVE_DRAIN_PUNCH
	checkpartymove MOVE_DRAIN_PUNCH
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_48:
	setvar VAR_HEARTSCALEMOVE2, MOVE_PSYCH_UP
	checkpartymove MOVE_PSYCH_UP
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_49:
	setvar VAR_HEARTSCALEMOVE2, MOVE_PAIN_SPLIT
	checkpartymove MOVE_PAIN_SPLIT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_50:
	setvar VAR_HEARTSCALEMOVE2, MOVE_TAILWIND
	checkpartymove MOVE_TAILWIND
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_51:
	setvar VAR_HEARTSCALEMOVE2, MOVE_IRON_TAIL
	checkpartymove MOVE_IRON_TAIL
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_52:
	setvar VAR_HEARTSCALEMOVE2, MOVE_ENDEAVOR
	checkpartymove MOVE_ENDEAVOR
	goto SetAndCheckHeartScaleMove_1


Kaolisle_Hotel_5F_Attendant::
	msgbox Kaolisle_Hotel_5F_Attendant_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_5F_Man3::
	lockall
	msgbox Kaolisle_Hotel_5F_Man3_Text, MSGBOX_DEFAULT
	closemessage
	release
	end


Kaolisle_Hotel_5F_Gentleman::
	goto_if_set FLAG_OBTAINED_ROSTEBERRIES, Kaolisle_Hotel_5F_Gentleman_2
	checktrainerflag TRAINER_HOTEL_KID1
	goto_if 1, Kaolisle_Hotel_5F_Gentleman_6
Kaolisle_Hotel_5F_Gentleman_4:
	msgbox Kaolisle_Hotel_5F_Gentleman_Text, MSGBOX_NPC
	end

Kaolisle_Hotel_5F_Gentleman_2:
	msgbox Kaolisle_Hotel_5F_Gentleman_Rest, MSGBOX_NPC
	end

Kaolisle_Hotel_5F_Gentleman_5:
	lock
	faceplayer
	msgbox Kaolisle_Hotel_5F_Gentleman_Text2, MSGBOX_DEFAULT
	waitse
	giveitem ITEM_ROSTE_BERRY, 2
	waitse
	closemessage
	setflag FLAG_OBTAINED_ROSTEBERRIES
	release
	end

Kaolisle_Hotel_5F_Gentleman_6:
	checktrainerflag TRAINER_HOTEL_KID2
	goto_if 1, Kaolisle_Hotel_5F_Gentleman_5
	goto Kaolisle_Hotel_5F_Gentleman_4


Kaolisle_Hotel_5F_TuberF::
	trainerbattle_single TRAINER_HOTEL_KID1, HotelKid1Intro, HotelKid1Lose
	msgbox HotelKid1PostBattle, MSGBOX_AUTOCLOSE
	end


Kaolisle_Hotel_5F_TuberM::
	trainerbattle_single TRAINER_HOTEL_KID2, HotelKid2Intro, HotelKid2Lose
	msgbox HotelKid2PostBattle, MSGBOX_AUTOCLOSE
	end


Kaolisle_Hotel_5F_Mother::
	msgbox Kaolisle_Hotel_5F_Mother_Text, MSGBOX_NPC
	end


Room501_Text_0:
	.string "Room 501$"

Room502_Text_0:
	.string "Room 502$"

Room503_Text_0:
	.string "Room 503$"

Room504_Text_0:
	.string "Room 504$"

Kaolisle_Hotel_5F_BPShopBeauty_Text::
	.string "Oh, trainer. I'm so pleased that\n"
	.string "you came all the way here!\p"
	.string "I'm wondering if you would\n"
	.string "do me a favor.$"

Kaolisle_Hotel_5F_Attendant_Text::
	.string "The previous customer left this room\n"
	.string "in a pretty abysmal state.\p"
	.string "It'll take a while before it's ready\n"
	.string "for service again.$"

Kaolisle_Hotel_5f_BPBeauty_Decline::
	.string "I'm touched that you came all the way\n"
	.string "here, yet you are being so unkind.$"

WouldLikeToSeeMove::
	.string "To be clear, I would like to see\n"
	.string "a Pokémon that knows {STR_VAR_2}.\p"
	.string "Thank you.$"

YourMonKnowsMove::
	.string "Oh, my goodness.\p"
	.string "Your {STR_VAR_1} can\n"
	.string "use {STR_VAR_2}!\p"
	.string "You went to all the trouble of teaching\n"
	.string "it to your Pokémon? That's so touching!\p"
	.string "This is just a small token of my\n"
	.string "appreciation. Please don't hesitate\l"
	.string "to accept this.$"

WonderHowItLooks::
	.string "I wonder what {STR_VAR_2} looks\n"
	.string "like when it is actually used.\p"
	.string "I am sure you can use it skillfully!$"

Kaolisle_Hotel_5F_Man3_Text::
	.string "Hm… This might be the wrong floor…\n"
	.string "But they all look so similar…$"

Kaolisle_Hotel_5F_Gentleman_Text::
	.string "There seems to be an awful racket\n"
	.string "coming from room 504.\p"
	.string "Could you be a good sport\n"
	.string "and see what's going on?$"

Kaolisle_Hotel_5F_Gentleman_Text2::
	.string "I should be able to get a good rest\n"
	.string "now that the racket in room 504 has\l"
	.string "died down.\p"
	.string "I won't be needing these anymore,\n"
	.string "so here, you can have them.$"

Kaolisle_Hotel_5F_Gentleman_Rest::
	.string "Now, please leave me be.\n"
	.string "I need a rest.$"

HotelKid1Intro::
	.string "A new foe enters the stage!$"

HotelKid1Lose::
	.string "The enemy's too strong!\n"
	.string "Retreat!$"

HotelKid1PostBattle::
	.string "We're sorry for being so loud.\n"
	.string "We'll be quieter from now on.$"

HotelKid2Intro::
	.string "Prepare to meet your end,\n"
	.string "evil villain!$"

HotelKid2Lose::
	.string "Waah! I lost!$"

HotelKid2PostBattle::
	.string "We promise to behave from now on,\n"
	.string "evil villain! Please don't eat us!$"

Kaolisle_Hotel_5F_Mother_Text::
	.string "Oh, we were making such a ruckus that\n"
	.string "we disturbed other people, were we?\p"
	.string "I'm terribly sorry!\p"
	.string "I'll make sure the kids lower their\n"
	.string "volume so that they don't cause\l"
	.string "any more disturbances.$"
