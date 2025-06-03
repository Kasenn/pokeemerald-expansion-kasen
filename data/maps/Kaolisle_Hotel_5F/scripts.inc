Kaolisle_Hotel_5F_MapScripts::
	.byte 0


Room501::
# 4 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Room501_Text_0, MSGBOX_SIGN
	end


Room502::
# 8 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Room502_Text_0, MSGBOX_SIGN
	end


Room503::
# 12 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Room503_Text_0, MSGBOX_SIGN
	end


Room504::
# 16 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Room504_Text_0, MSGBOX_SIGN
	end


Kaolisle_Hotel_5F_BPShopBeauty::
# 21 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	lock
# 22 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	faceplayer
# 23 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	compare VAR_BPBEAUTY_STATE, 2
	goto_if_eq Kaolisle_Hotel_5F_BPShopBeauty_2
# 28 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	compare VAR_BPBEAUTY_STATE, 1
	goto_if_eq Kaolisle_Hotel_5F_BPShopBeauty_5
# 58 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	call SetAndCheckHeartScaleMove
# 59 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Kaolisle_Hotel_5F_BPShopBeauty_Text, MSGBOX_YESNO
# 60 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Kaolisle_Hotel_5F_BPShopBeauty_8
# 64 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_BPBEAUTY_STATE, 1
# 65 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	buffermovename STR_VAR_2, VAR_HEARTSCALEMOVE2
# 66 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox WouldLikeToSeeMove, MSGBOX_NPC
	end

Kaolisle_Hotel_5F_BPShopBeauty_2:
# 24 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	buffermovename STR_VAR_2, VAR_HEARTSCALEMOVE2
# 25 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox WonderHowItLooks, MSGBOX_NPC
	end

Kaolisle_Hotel_5F_BPShopBeauty_5:
# 29 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	call SetAndCheckHeartScaleMove
# 30 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	buffermovename STR_VAR_2, VAR_HEARTSCALEMOVE2
# 31 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Kaolisle_Hotel_5F_BPShopBeauty_10
# 40 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 41 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox YourMonKnowsMove, MSGBOX_DEFAULT
	checkitemspace ITEM_HEART_SCALE
# 0 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Kaolisle_Hotel_5F_BPShopBeauty_17
Kaolisle_Hotel_5F_BPShopBeauty_16:
# 45 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	waitse
# 46 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 47 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	waitfanfare
# 48 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_BPBEAUTY_STATE, 2
# 49 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	closemessage
# 50 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	release
# 51 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	goto_if_set FLAG_Q26_HOTEL_SHOW_TM_START, Kaolisle_Hotel_5F_BPShopBeauty_21
Kaolisle_Hotel_5F_BPShopBeauty_19:
	end

Kaolisle_Hotel_5F_BPShopBeauty_8:
# 61 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Kaolisle_Hotel_5f_BPBeauty_Decline, MSGBOX_NPC
	end

Kaolisle_Hotel_5F_BPShopBeauty_10:
# 32 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox WouldLikeToSeeMove, MSGBOX_NPC
# 33 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	goto_if_unset FLAG_Q26_HOTEL_SHOW_TM_START, Kaolisle_Hotel_5F_BPShopBeauty_14
Kaolisle_Hotel_5F_BPShopBeauty_13:
	end

Kaolisle_Hotel_5F_BPShopBeauty_14:
# 34 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	startquest FLAG_Q26_HOTEL_SHOW_TM_START
# 35 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	special ShowJournalPopupAdd
	goto Kaolisle_Hotel_5F_BPShopBeauty_13

Kaolisle_Hotel_5F_BPShopBeauty_17:
# 43 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	goto ZeBagIsFull
	goto Kaolisle_Hotel_5F_BPShopBeauty_16

Kaolisle_Hotel_5F_BPShopBeauty_20:
# 52 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	completequest FLAG_Q26_HOTEL_SHOW_TM_COMPLETE
# 53 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	special ShowJournalPopupRemove
	goto Kaolisle_Hotel_5F_BPShopBeauty_19

Kaolisle_Hotel_5F_BPShopBeauty_21:
# 51 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	goto_if_unset FLAG_Q26_HOTEL_SHOW_TM_COMPLETE, Kaolisle_Hotel_5F_BPShopBeauty_20
	goto Kaolisle_Hotel_5F_BPShopBeauty_19


SetAndCheckHeartScaleMove::
# 77 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	switch VAR_HEARTSCALEMOVE
# 78 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 1, SetAndCheckHeartScaleMove_3
# 81 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 2, SetAndCheckHeartScaleMove_4
# 84 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 3, SetAndCheckHeartScaleMove_5
# 87 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 4, SetAndCheckHeartScaleMove_6
# 90 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 5, SetAndCheckHeartScaleMove_7
# 93 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 6, SetAndCheckHeartScaleMove_8
# 96 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 7, SetAndCheckHeartScaleMove_9
# 99 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 8, SetAndCheckHeartScaleMove_10
# 102 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 9, SetAndCheckHeartScaleMove_11
# 105 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 10, SetAndCheckHeartScaleMove_12
# 108 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 11, SetAndCheckHeartScaleMove_13
# 111 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 12, SetAndCheckHeartScaleMove_14
# 114 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 13, SetAndCheckHeartScaleMove_15
# 117 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 14, SetAndCheckHeartScaleMove_16
# 120 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 15, SetAndCheckHeartScaleMove_17
# 123 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 16, SetAndCheckHeartScaleMove_18
# 126 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 17, SetAndCheckHeartScaleMove_19
# 129 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 18, SetAndCheckHeartScaleMove_20
# 132 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 19, SetAndCheckHeartScaleMove_21
# 135 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 20, SetAndCheckHeartScaleMove_22
# 138 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 21, SetAndCheckHeartScaleMove_23
# 141 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 22, SetAndCheckHeartScaleMove_24
# 144 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 23, SetAndCheckHeartScaleMove_25
# 147 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 24, SetAndCheckHeartScaleMove_26
# 150 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 25, SetAndCheckHeartScaleMove_27
# 153 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 26, SetAndCheckHeartScaleMove_28
# 156 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 27, SetAndCheckHeartScaleMove_29
# 159 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 28, SetAndCheckHeartScaleMove_30
# 162 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 29, SetAndCheckHeartScaleMove_31
# 165 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 30, SetAndCheckHeartScaleMove_32
# 168 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 31, SetAndCheckHeartScaleMove_33
# 171 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 32, SetAndCheckHeartScaleMove_34
# 174 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 33, SetAndCheckHeartScaleMove_35
# 177 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 34, SetAndCheckHeartScaleMove_36
# 180 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 35, SetAndCheckHeartScaleMove_37
# 183 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 36, SetAndCheckHeartScaleMove_38
# 186 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 37, SetAndCheckHeartScaleMove_39
# 189 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 38, SetAndCheckHeartScaleMove_40
# 192 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 39, SetAndCheckHeartScaleMove_41
# 195 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 40, SetAndCheckHeartScaleMove_42
# 198 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 41, SetAndCheckHeartScaleMove_43
# 201 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 42, SetAndCheckHeartScaleMove_44
# 204 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 43, SetAndCheckHeartScaleMove_45
# 207 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 44, SetAndCheckHeartScaleMove_46
# 210 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 45, SetAndCheckHeartScaleMove_47
# 213 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 46, SetAndCheckHeartScaleMove_48
# 216 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 47, SetAndCheckHeartScaleMove_49
# 219 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 48, SetAndCheckHeartScaleMove_50
# 222 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 49, SetAndCheckHeartScaleMove_51
# 225 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 50, SetAndCheckHeartScaleMove_52
SetAndCheckHeartScaleMove_1:
	return

SetAndCheckHeartScaleMove_3:
# 79 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_SNORE
# 80 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_SNORE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_4:
# 82 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_BIND
# 83 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_BIND
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_5:
# 85 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_SHOCK_WAVE
# 86 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_SHOCK_WAVE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_6:
# 88 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_BUG_BITE
# 89 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_BUG_BITE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_7:
# 91 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_HEAL_BELL
# 92 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_HEAL_BELL
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_8:
# 94 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_ELECTROWEB
# 95 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_ELECTROWEB
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_9:
# 97 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_DEFOG
# 98 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_DEFOG
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_10:
# 100 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_LOW_KICK
# 101 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_LOW_KICK
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_11:
# 103 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_HELPING_HAND
# 104 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_HELPING_HAND
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_12:
# 106 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_RECYCLE
# 107 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_RECYCLE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_13:
# 109 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_DRILL_RUN
# 110 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_DRILL_RUN
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_14:
# 112 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_BOUNCE
# 113 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_BOUNCE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_15:
# 115 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_SIGNAL_BEAM
# 116 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_SIGNAL_BEAM
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_16:
# 118 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_IRON_HEAD
# 119 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_IRON_HEAD
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_17:
# 121 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_IRON_DEFENSE
# 122 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_IRON_DEFENSE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_18:
# 124 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_MAGNET_RISE
# 125 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_MAGNET_RISE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_19:
# 127 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_MAGIC_COAT
# 128 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_MAGIC_COAT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_20:
# 130 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_KNOCK_OFF
# 131 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_KNOCK_OFF
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_21:
# 133 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_SKILL_SWAP
# 134 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_SKILL_SWAP
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_22:
# 136 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_ICY_WIND
# 137 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_ICY_WIND
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_23:
# 139 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_WATER_PULSE
# 140 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_WATER_PULSE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_24:
# 142 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_FURY_CUTTER
# 143 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_FURY_CUTTER
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_25:
# 145 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_MAGIC_ROOM
# 146 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_MAGIC_ROOM
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_26:
# 148 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_MUD_SLAP
# 149 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_MUD_SLAP
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_27:
# 151 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_SWIFT
# 152 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_SWIFT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_28:
# 154 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_FOUL_PLAY
# 155 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_FOUL_PLAY
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_29:
# 157 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_GUNK_SHOT
# 158 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_GUNK_SHOT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_30:
# 160 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_TRICK
# 161 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_TRICK
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_31:
# 163 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_ANCIENT_POWER
# 164 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_ANCIENT_POWER
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_32:
# 166 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_OMINOUS_WIND
# 167 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_OMINOUS_WIND
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_33:
# 169 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_COVET
# 170 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_COVET
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_34:
# 172 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_STRING_SHOT
# 173 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_STRING_SHOT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_35:
# 175 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_BLOCK
# 176 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_BLOCK
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_36:
# 178 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_SNATCH
# 179 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_SNATCH
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_37:
# 181 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_UPROAR
# 182 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_UPROAR
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_38:
# 184 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_WORRY_SEED
# 185 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_WORRY_SEED
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_39:
# 187 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_STEALTH_ROCK
# 188 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_STEALTH_ROCK
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_40:
# 190 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_SYNTHESIS
# 191 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_SYNTHESIS
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_41:
# 193 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_ZEN_HEADBUTT
# 194 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_ZEN_HEADBUTT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_42:
# 196 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_LAST_RESORT
# 197 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_LAST_RESORT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_43:
# 199 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_THUNDER_WAVE
# 200 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_THUNDER_WAVE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_44:
# 202 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_FIRE_PUNCH
# 203 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_FIRE_PUNCH
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_45:
# 205 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_THUNDER_PUNCH
# 206 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_THUNDER_PUNCH
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_46:
# 208 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_ICE_PUNCH
# 209 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_ICE_PUNCH
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_47:
# 211 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_DRAIN_PUNCH
# 212 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_DRAIN_PUNCH
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_48:
# 214 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_PSYCH_UP
# 215 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_PSYCH_UP
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_49:
# 217 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_PAIN_SPLIT
# 218 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_PAIN_SPLIT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_50:
# 220 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_TAILWIND
# 221 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_TAILWIND
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_51:
# 223 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_IRON_TAIL
# 224 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_IRON_TAIL
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_52:
# 226 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_ENDEAVOR
# 227 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_ENDEAVOR
	goto SetAndCheckHeartScaleMove_1


Kaolisle_Hotel_5F_Attendant::
# 233 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Kaolisle_Hotel_5F_Attendant_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_5F_Man3::
# 269 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	lock
# 270 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Kaolisle_Hotel_5F_Man3_Text, MSGBOX_DEFAULT
# 271 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	closemessage
# 272 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	release
	end


Kaolisle_Hotel_5F_Gentleman::
# 281 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	goto_if_set FLAG_OBTAINED_ROSTEBERRIES, Kaolisle_Hotel_5F_Gentleman_2
# 285 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checktrainerflag TRAINER_HOTEL_KID1
	goto_if 1, Kaolisle_Hotel_5F_Gentleman_6
Kaolisle_Hotel_5F_Gentleman_4:
# 302 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Kaolisle_Hotel_5F_Gentleman_Text, MSGBOX_NPC
# 303 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	goto_if_unset FLAG_Q27_HOTEL_WILDKIDS_START, Kaolisle_Hotel_5F_Gentleman_10
Kaolisle_Hotel_5F_Gentleman_9:
	end

Kaolisle_Hotel_5F_Gentleman_2:
# 282 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Kaolisle_Hotel_5F_Gentleman_Rest, MSGBOX_NPC
	end

Kaolisle_Hotel_5F_Gentleman_5:
# 287 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	lock
# 288 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	faceplayer
# 289 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Kaolisle_Hotel_5F_Gentleman_Text2, MSGBOX_DEFAULT
# 290 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	waitse
# 291 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	giveitem ITEM_ROSTE_BERRY, 2
# 292 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	waitse
# 293 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	closemessage
# 294 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setflag FLAG_OBTAINED_ROSTEBERRIES
# 295 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	release
# 296 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	goto_if_set FLAG_Q27_HOTEL_WILDKIDS_START, Kaolisle_Hotel_5F_Gentleman_13
Kaolisle_Hotel_5F_Gentleman_12:
	end

Kaolisle_Hotel_5F_Gentleman_6:
# 286 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checktrainerflag TRAINER_HOTEL_KID2
	goto_if 1, Kaolisle_Hotel_5F_Gentleman_5
	goto Kaolisle_Hotel_5F_Gentleman_4

Kaolisle_Hotel_5F_Gentleman_10:
# 304 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	startquest FLAG_Q27_HOTEL_WILDKIDS_START
# 305 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	special ShowJournalPopupAdd
	goto Kaolisle_Hotel_5F_Gentleman_9

Kaolisle_Hotel_5F_Gentleman_13:
# 297 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	completequest FLAG_Q27_HOTEL_WILDKIDS_COMPLETE
# 298 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	special ShowJournalPopupRemove
	goto Kaolisle_Hotel_5F_Gentleman_12


Kaolisle_Hotel_5F_TuberF::
# 328 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	trainerbattle_single TRAINER_HOTEL_KID1, HotelKid1Intro, HotelKid1Lose
# 329 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox HotelKid1PostBattle, MSGBOX_AUTOCLOSE
	end


Kaolisle_Hotel_5F_TuberM::
# 333 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	trainerbattle_single TRAINER_HOTEL_KID2, HotelKid2Intro, HotelKid2Lose
# 334 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox HotelKid2PostBattle, MSGBOX_AUTOCLOSE
	end


Kaolisle_Hotel_5F_Mother::
# 362 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Kaolisle_Hotel_5F_Mother_Text, MSGBOX_NPC
	end


Room501_Text_0:
# 4 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Room 501$"

Room502_Text_0:
# 8 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Room 502$"

Room503_Text_0:
# 12 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Room 503$"

Room504_Text_0:
# 16 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Room 504$"

Kaolisle_Hotel_5F_BPShopBeauty_Text::
# 69 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Oh, trainer. I'm so pleased that\n"
	.string "you came all the way here!\p"
	.string "I'm wondering if you would\n"
	.string "do me a favor.$"

Kaolisle_Hotel_5F_Attendant_Text::
# 237 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "The previous customer left this room\n"
	.string "in a pretty abysmal state.\p"
	.string "It'll take a while before it's ready\n"
	.string "for service again.$"

Kaolisle_Hotel_5f_BPBeauty_Decline::
# 243 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "I'm touched that you came all the way\n"
	.string "here, yet you are being so unkind.$"

WouldLikeToSeeMove::
# 247 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "To be clear, I would like to see\n"
	.string "a Pokémon that knows {STR_VAR_2}.\p"
	.string "Thank you.$"

YourMonKnowsMove::
# 252 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Oh, my goodness.\p"
	.string "Your {STR_VAR_1} can\n"
	.string "use {STR_VAR_2}!\p"
	.string "You went to all the trouble of teaching\n"
	.string "it to your Pokémon? That's so touching!\p"
	.string "This is just a small token of my\n"
	.string "appreciation. Please don't hesitate\l"
	.string "to accept this.$"

WonderHowItLooks::
# 262 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "I wonder what {STR_VAR_2} looks\n"
	.string "like when it is actually used.\p"
	.string "I am sure you can use it skillfully!$"

Kaolisle_Hotel_5F_Man3_Text::
# 275 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Hm… This might be the wrong floor…\n"
	.string "But they all look so similar…$"

Kaolisle_Hotel_5F_Gentleman_Text::
# 309 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "There seems to be an awful racket\n"
	.string "coming from room 504.\p"
	.string "Could you be a good sport\n"
	.string "and see what's going on?$"

Kaolisle_Hotel_5F_Gentleman_Text2::
# 315 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "I should be able to get a good rest\n"
	.string "now that the racket in room 504 has\l"
	.string "died down.\p"
	.string "I won't be needing these anymore,\n"
	.string "so here, you can have them.$"

Kaolisle_Hotel_5F_Gentleman_Rest::
# 322 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Now, please leave me be.\n"
	.string "I need a rest.$"

HotelKid1Intro::
# 337 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "A new foe enters the stage!$"

HotelKid1Lose::
# 340 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "The enemy's too strong!\n"
	.string "Retreat!$"

HotelKid1PostBattle::
# 344 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "We're sorry for being so loud.\n"
	.string "We'll be quieter from now on.$"

HotelKid2Intro::
# 349 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Prepare to meet your end,\n"
	.string "evil villain!$"

HotelKid2Lose::
# 353 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Waah! I lost!$"

HotelKid2PostBattle::
# 356 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "We promise to behave from now on,\n"
	.string "evil villain! Please don't eat us!$"

Kaolisle_Hotel_5F_Mother_Text::
# 365 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Oh, we were making such a ruckus that\n"
	.string "we disturbed other people, were we?\p"
	.string "I'm terribly sorry!\p"
	.string "I'll make sure the kids lower their\n"
	.string "volume so that they don't cause\l"
	.string "any more disturbances.$"
