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
# 50 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	call SetAndCheckHeartScaleMove
# 51 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Kaolisle_Hotel_5F_BPShopBeauty_Text, MSGBOX_YESNO
# 52 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Kaolisle_Hotel_5F_BPShopBeauty_8
# 56 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_BPBEAUTY_STATE, 1
# 57 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	buffermovename STR_VAR_2, VAR_HEARTSCALEMOVE2
# 58 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
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
# 36 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 37 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox YourMonKnowsMove, MSGBOX_DEFAULT
	checkitemspace ITEM_HEART_SCALE
# 0 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Kaolisle_Hotel_5F_BPShopBeauty_14
Kaolisle_Hotel_5F_BPShopBeauty_13:
# 41 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	waitse
# 42 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 43 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	waitfanfare
# 44 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_BPBEAUTY_STATE, 2
# 45 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	closemessage
# 46 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	release
	end

Kaolisle_Hotel_5F_BPShopBeauty_8:
# 53 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Kaolisle_Hotel_5f_BPBeauty_Decline, MSGBOX_NPC
	end

Kaolisle_Hotel_5F_BPShopBeauty_10:
# 32 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox WouldLikeToSeeMove, MSGBOX_NPC
	end

Kaolisle_Hotel_5F_BPShopBeauty_14:
# 39 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	goto ZeBagIsFull
	goto Kaolisle_Hotel_5F_BPShopBeauty_13


SetAndCheckHeartScaleMove::
# 69 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	switch VAR_HEARTSCALEMOVE
# 70 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 1, SetAndCheckHeartScaleMove_3
# 73 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 2, SetAndCheckHeartScaleMove_4
# 76 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 3, SetAndCheckHeartScaleMove_5
# 79 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 4, SetAndCheckHeartScaleMove_6
# 82 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 5, SetAndCheckHeartScaleMove_7
# 85 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 6, SetAndCheckHeartScaleMove_8
# 88 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 7, SetAndCheckHeartScaleMove_9
# 91 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 8, SetAndCheckHeartScaleMove_10
# 94 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 9, SetAndCheckHeartScaleMove_11
# 97 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 10, SetAndCheckHeartScaleMove_12
# 100 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 11, SetAndCheckHeartScaleMove_13
# 103 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 12, SetAndCheckHeartScaleMove_14
# 106 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 13, SetAndCheckHeartScaleMove_15
# 109 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 14, SetAndCheckHeartScaleMove_16
# 112 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 15, SetAndCheckHeartScaleMove_17
# 115 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 16, SetAndCheckHeartScaleMove_18
# 118 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 17, SetAndCheckHeartScaleMove_19
# 121 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 18, SetAndCheckHeartScaleMove_20
# 124 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 19, SetAndCheckHeartScaleMove_21
# 127 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 20, SetAndCheckHeartScaleMove_22
# 130 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 21, SetAndCheckHeartScaleMove_23
# 133 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 22, SetAndCheckHeartScaleMove_24
# 136 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 23, SetAndCheckHeartScaleMove_25
# 139 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 24, SetAndCheckHeartScaleMove_26
# 142 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 25, SetAndCheckHeartScaleMove_27
# 145 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 26, SetAndCheckHeartScaleMove_28
# 148 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 27, SetAndCheckHeartScaleMove_29
# 151 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 28, SetAndCheckHeartScaleMove_30
# 154 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 29, SetAndCheckHeartScaleMove_31
# 157 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 30, SetAndCheckHeartScaleMove_32
# 160 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 31, SetAndCheckHeartScaleMove_33
# 163 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 32, SetAndCheckHeartScaleMove_34
# 166 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 33, SetAndCheckHeartScaleMove_35
# 169 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 34, SetAndCheckHeartScaleMove_36
# 172 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 35, SetAndCheckHeartScaleMove_37
# 175 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 36, SetAndCheckHeartScaleMove_38
# 178 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 37, SetAndCheckHeartScaleMove_39
# 181 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 38, SetAndCheckHeartScaleMove_40
# 184 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 39, SetAndCheckHeartScaleMove_41
# 187 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 40, SetAndCheckHeartScaleMove_42
# 190 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 41, SetAndCheckHeartScaleMove_43
# 193 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 42, SetAndCheckHeartScaleMove_44
# 196 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 43, SetAndCheckHeartScaleMove_45
# 199 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 44, SetAndCheckHeartScaleMove_46
# 202 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 45, SetAndCheckHeartScaleMove_47
# 205 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 46, SetAndCheckHeartScaleMove_48
# 208 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 47, SetAndCheckHeartScaleMove_49
# 211 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 48, SetAndCheckHeartScaleMove_50
# 214 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 49, SetAndCheckHeartScaleMove_51
# 217 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	case 50, SetAndCheckHeartScaleMove_52
SetAndCheckHeartScaleMove_1:
	return

SetAndCheckHeartScaleMove_3:
# 71 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_SNORE
# 72 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_SNORE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_4:
# 74 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_BIND
# 75 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_BIND
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_5:
# 77 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_SHOCK_WAVE
# 78 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_SHOCK_WAVE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_6:
# 80 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_BUG_BITE
# 81 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_BUG_BITE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_7:
# 83 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_HEAL_BELL
# 84 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_HEAL_BELL
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_8:
# 86 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_ELECTROWEB
# 87 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_ELECTROWEB
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_9:
# 89 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_DEFOG
# 90 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_DEFOG
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_10:
# 92 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_LOW_KICK
# 93 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_LOW_KICK
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_11:
# 95 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_HELPING_HAND
# 96 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_HELPING_HAND
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_12:
# 98 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_RECYCLE
# 99 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_RECYCLE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_13:
# 101 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_DRILL_RUN
# 102 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_DRILL_RUN
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_14:
# 104 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_BOUNCE
# 105 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_BOUNCE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_15:
# 107 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_SIGNAL_BEAM
# 108 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_SIGNAL_BEAM
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_16:
# 110 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_IRON_HEAD
# 111 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_IRON_HEAD
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_17:
# 113 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_IRON_DEFENSE
# 114 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_IRON_DEFENSE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_18:
# 116 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_MAGNET_RISE
# 117 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_MAGNET_RISE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_19:
# 119 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_MAGIC_COAT
# 120 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_MAGIC_COAT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_20:
# 122 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_KNOCK_OFF
# 123 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_KNOCK_OFF
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_21:
# 125 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_SKILL_SWAP
# 126 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_SKILL_SWAP
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_22:
# 128 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_ICY_WIND
# 129 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_ICY_WIND
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_23:
# 131 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_WATER_PULSE
# 132 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_WATER_PULSE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_24:
# 134 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_FURY_CUTTER
# 135 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_FURY_CUTTER
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_25:
# 137 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_MAGIC_ROOM
# 138 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_MAGIC_ROOM
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_26:
# 140 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_MUD_SLAP
# 141 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_MUD_SLAP
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_27:
# 143 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_SWIFT
# 144 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_SWIFT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_28:
# 146 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_FOUL_PLAY
# 147 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_FOUL_PLAY
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_29:
# 149 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_GUNK_SHOT
# 150 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_GUNK_SHOT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_30:
# 152 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_TRICK
# 153 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_TRICK
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_31:
# 155 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_ANCIENT_POWER
# 156 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_ANCIENT_POWER
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_32:
# 158 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_OMINOUS_WIND
# 159 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_OMINOUS_WIND
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_33:
# 161 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_COVET
# 162 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_COVET
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_34:
# 164 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_STRING_SHOT
# 165 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_STRING_SHOT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_35:
# 167 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_BLOCK
# 168 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_BLOCK
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_36:
# 170 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_SNATCH
# 171 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_SNATCH
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_37:
# 173 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_UPROAR
# 174 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_UPROAR
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_38:
# 176 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_WORRY_SEED
# 177 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_WORRY_SEED
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_39:
# 179 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_STEALTH_ROCK
# 180 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_STEALTH_ROCK
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_40:
# 182 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_SYNTHESIS
# 183 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_SYNTHESIS
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_41:
# 185 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_ZEN_HEADBUTT
# 186 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_ZEN_HEADBUTT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_42:
# 188 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_LAST_RESORT
# 189 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_LAST_RESORT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_43:
# 191 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_THUNDER_WAVE
# 192 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_THUNDER_WAVE
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_44:
# 194 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_FIRE_PUNCH
# 195 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_FIRE_PUNCH
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_45:
# 197 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_THUNDER_PUNCH
# 198 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_THUNDER_PUNCH
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_46:
# 200 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_ICE_PUNCH
# 201 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_ICE_PUNCH
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_47:
# 203 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_DRAIN_PUNCH
# 204 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_DRAIN_PUNCH
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_48:
# 206 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_PSYCH_UP
# 207 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_PSYCH_UP
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_49:
# 209 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_PAIN_SPLIT
# 210 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_PAIN_SPLIT
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_50:
# 212 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_TAILWIND
# 213 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_TAILWIND
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_51:
# 215 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_IRON_TAIL
# 216 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_IRON_TAIL
	goto SetAndCheckHeartScaleMove_1

SetAndCheckHeartScaleMove_52:
# 218 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setvar VAR_HEARTSCALEMOVE2, MOVE_ENDEAVOR
# 219 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checkpartymove MOVE_ENDEAVOR
	goto SetAndCheckHeartScaleMove_1


Kaolisle_Hotel_5F_Attendant::
# 225 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Kaolisle_Hotel_5F_Attendant_Text, MSGBOX_NPC
	end


Kaolisle_Hotel_5F_Man3::
# 261 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	lockall
# 262 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Kaolisle_Hotel_5F_Man3_Text, MSGBOX_DEFAULT
# 263 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	closemessage
# 264 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	release
	end


Kaolisle_Hotel_5F_Gentleman::
# 273 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	goto_if_set FLAG_OBTAINED_ROSTEBERRIES, Kaolisle_Hotel_5F_Gentleman_2
# 277 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checktrainerflag TRAINER_HOTEL_KID1
	goto_if 1, Kaolisle_Hotel_5F_Gentleman_6
Kaolisle_Hotel_5F_Gentleman_4:
# 290 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Kaolisle_Hotel_5F_Gentleman_Text, MSGBOX_NPC
	end

Kaolisle_Hotel_5F_Gentleman_2:
# 274 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Kaolisle_Hotel_5F_Gentleman_Rest, MSGBOX_NPC
	end

Kaolisle_Hotel_5F_Gentleman_5:
# 279 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	lock
# 280 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	faceplayer
# 281 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox Kaolisle_Hotel_5F_Gentleman_Text2, MSGBOX_DEFAULT
# 282 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	waitse
# 283 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	giveitem ITEM_ROSTE_BERRY, 2
# 284 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	waitse
# 285 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	closemessage
# 286 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	setflag FLAG_OBTAINED_ROSTEBERRIES
# 287 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	release
	end

Kaolisle_Hotel_5F_Gentleman_6:
# 278 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	checktrainerflag TRAINER_HOTEL_KID2
	goto_if 1, Kaolisle_Hotel_5F_Gentleman_5
	goto Kaolisle_Hotel_5F_Gentleman_4


Kaolisle_Hotel_5F_TuberF::
# 312 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	trainerbattle_single TRAINER_HOTEL_KID1, HotelKid1Intro, HotelKid1Lose
# 313 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox HotelKid1PostBattle, MSGBOX_AUTOCLOSE
	end


Kaolisle_Hotel_5F_TuberM::
# 317 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	trainerbattle_single TRAINER_HOTEL_KID2, HotelKid2Intro, HotelKid2Lose
# 318 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	msgbox HotelKid2PostBattle, MSGBOX_AUTOCLOSE
	end


Kaolisle_Hotel_5F_Mother::
# 346 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
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
# 61 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Oh, trainer. I'm so pleased that\n"
	.string "you came all the way here!\p"
	.string "I'm wondering if you would\n"
	.string "do me a favor.$"

Kaolisle_Hotel_5F_Attendant_Text::
# 229 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "The previous customer left this room\n"
	.string "in a pretty abysmal state.\p"
	.string "It'll take a while before it's ready\n"
	.string "for service again.$"

Kaolisle_Hotel_5f_BPBeauty_Decline::
# 235 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "I'm touched that you came all the way\n"
	.string "here, yet you are being so unkind.$"

WouldLikeToSeeMove::
# 239 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "To be clear, I would like to see\n"
	.string "a Pokémon that knows {STR_VAR_2}.\p"
	.string "Thank you.$"

YourMonKnowsMove::
# 244 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Oh, my goodness.\p"
	.string "Your {STR_VAR_1} can\n"
	.string "use {STR_VAR_2}!\p"
	.string "You went to all the trouble of teaching\n"
	.string "it to your Pokémon? That's so touching!\p"
	.string "This is just a small token of my\n"
	.string "appreciation. Please don't hesitate\l"
	.string "to accept this.$"

WonderHowItLooks::
# 254 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "I wonder what {STR_VAR_2} looks\n"
	.string "like when it is actually used.\p"
	.string "I am sure you can use it skillfully!$"

Kaolisle_Hotel_5F_Man3_Text::
# 267 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Hm… This might be the wrong floor…\n"
	.string "But they all look so similar…$"

Kaolisle_Hotel_5F_Gentleman_Text::
# 293 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "There seems to be an awful racket\n"
	.string "coming from room 504.\p"
	.string "Could you be a good sport\n"
	.string "and see what's going on?$"

Kaolisle_Hotel_5F_Gentleman_Text2::
# 299 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "I should be able to get a good rest\n"
	.string "now that the racket in room 504 has\l"
	.string "died down.\p"
	.string "I won't be needing these anymore,\n"
	.string "so here, you can have them.$"

Kaolisle_Hotel_5F_Gentleman_Rest::
# 306 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Now, please leave me be.\n"
	.string "I need a rest.$"

HotelKid1Intro::
# 321 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "A new foe enters the stage!$"

HotelKid1Lose::
# 324 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "The enemy's too strong!\n"
	.string "Retreat!$"

HotelKid1PostBattle::
# 328 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "We're sorry for being so loud.\n"
	.string "We'll be quieter from now on.$"

HotelKid2Intro::
# 333 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Prepare to meet your end,\n"
	.string "evil villain!$"

HotelKid2Lose::
# 337 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Waah! I lost!$"

HotelKid2PostBattle::
# 340 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "We promise to behave from now on,\n"
	.string "evil villain! Please don't eat us!$"

Kaolisle_Hotel_5F_Mother_Text::
# 349 "data/maps/Kaolisle_Hotel_5F/scripts.pory"
	.string "Oh, we were making such a ruckus that\n"
	.string "we disturbed other people, were we?\p"
	.string "I'm terribly sorry!\p"
	.string "I'll make sure the kids lower their\n"
	.string "volume so that they don't cause\l"
	.string "any more disturbances.$"
