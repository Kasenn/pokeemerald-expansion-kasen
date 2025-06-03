AldeleafSmallHouse2_MapScripts::
# 2 "data/maps/AldeleafSmallHouse2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AldeleafHouseEvent
	.byte 0


AldeleafHouseEvent::
# 6 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 3
	goto_if_eq AldeleafHouseEvent_2
# 11 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 4
	goto_if_eq AldeleafHouseEvent_5
# 11 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 5
	goto_if_eq AldeleafHouseEvent_5
# 15 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 6
	goto_if_ge AldeleafHouseEvent_9
	return

AldeleafHouseEvent_2:
# 7 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 4
# 8 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setobjectxyperm 2, 0, 5
	end

AldeleafHouseEvent_5:
# 12 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setobjectxyperm 2, 0, 5
	end

AldeleafHouseEvent_9:
# 16 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setobjectxyperm 2, 0, 4
	end


AldeleafSmallHouse2_Woman::
# 34 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 0
	goto_if_eq AldeleafSmallHouse2_Woman_2
# 43 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 1
	goto_if_eq AldeleafSmallHouse2_Woman_5
# 43 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 5
	goto_if_eq AldeleafSmallHouse2_Woman_5
# 43 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 7
	goto_if_eq AldeleafSmallHouse2_Woman_5
# 51 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 2
	goto_if_eq AldeleafSmallHouse2_Woman_15
# 60 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 3
	goto_if_eq AldeleafSmallHouse2_Woman_21
# 68 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 4
	goto_if_eq AldeleafSmallHouse2_Woman_27
# 77 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 6
	goto_if_eq AldeleafSmallHouse2_Woman_33
# 95 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 8
	goto_if_eq AldeleafSmallHouse2_Woman_39
# 104 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 9
	goto_if_eq AldeleafSmallHouse2_Woman_45
# 112 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 10
	goto_if_eq AldeleafSmallHouse2_Woman_54
# 120 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 11
	goto_if_eq AldeleafSmallHouse2_Woman_60
# 125 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 12
	goto_if_eq AldeleafSmallHouse2_Woman_65
	return

AldeleafSmallHouse2_Woman_2:
# 35 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_Intro, MSGBOX_NPC
# 36 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 1
# 37 "data/maps/AldeleafSmallHouse2/scripts.pory"
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_12
AldeleafSmallHouse2_Woman_11:
	end

AldeleafSmallHouse2_Woman_5:
# 44 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_ISwear, MSGBOX_NPC
# 45 "data/maps/AldeleafSmallHouse2/scripts.pory"
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_18
AldeleafSmallHouse2_Woman_17:
	end

AldeleafSmallHouse2_Woman_12:
# 38 "data/maps/AldeleafSmallHouse2/scripts.pory"
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
# 39 "data/maps/AldeleafSmallHouse2/scripts.pory"
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_11

AldeleafSmallHouse2_Woman_15:
# 52 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_NotMovingNow, MSGBOX_NPC
# 53 "data/maps/AldeleafSmallHouse2/scripts.pory"
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_24
AldeleafSmallHouse2_Woman_23:
# 57 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 3
	end

AldeleafSmallHouse2_Woman_18:
# 46 "data/maps/AldeleafSmallHouse2/scripts.pory"
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
# 47 "data/maps/AldeleafSmallHouse2/scripts.pory"
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_17

AldeleafSmallHouse2_Woman_21:
# 61 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_NotMovingNow, MSGBOX_NPC
# 62 "data/maps/AldeleafSmallHouse2/scripts.pory"
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_30
AldeleafSmallHouse2_Woman_29:
	end

AldeleafSmallHouse2_Woman_24:
# 54 "data/maps/AldeleafSmallHouse2/scripts.pory"
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
# 55 "data/maps/AldeleafSmallHouse2/scripts.pory"
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_23

AldeleafSmallHouse2_Woman_27:
# 69 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_ItMovedAgain, MSGBOX_NPC
# 70 "data/maps/AldeleafSmallHouse2/scripts.pory"
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_36
AldeleafSmallHouse2_Woman_35:
# 74 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 5
	end

AldeleafSmallHouse2_Woman_30:
# 63 "data/maps/AldeleafSmallHouse2/scripts.pory"
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
# 64 "data/maps/AldeleafSmallHouse2/scripts.pory"
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_29

AldeleafSmallHouse2_Woman_33:
# 78 "data/maps/AldeleafSmallHouse2/scripts.pory"
	goto_if_unset FLAG_GHOST_MOVED, AldeleafSmallHouse2_Woman_42
AldeleafSmallHouse2_Woman_41:
# 87 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_ItJustMoved, MSGBOX_NPC
# 88 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 7
# 89 "data/maps/AldeleafSmallHouse2/scripts.pory"
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_51
AldeleafSmallHouse2_Woman_50:
	end

AldeleafSmallHouse2_Woman_36:
# 71 "data/maps/AldeleafSmallHouse2/scripts.pory"
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
# 72 "data/maps/AldeleafSmallHouse2/scripts.pory"
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_35

AldeleafSmallHouse2_Woman_39:
# 96 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_ImMoving, MSGBOX_NPC
# 97 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 9
# 98 "data/maps/AldeleafSmallHouse2/scripts.pory"
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_48
AldeleafSmallHouse2_Woman_47:
	end

AldeleafSmallHouse2_Woman_42:
# 79 "data/maps/AldeleafSmallHouse2/scripts.pory"
	lock
# 80 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setflag FLAG_GHOST_MOVED
# 81 "data/maps/AldeleafSmallHouse2/scripts.pory"
	safefollow
# 82 "data/maps/AldeleafSmallHouse2/scripts.pory"
	applymovement 2, AldeleafMoveGhost
# 83 "data/maps/AldeleafSmallHouse2/scripts.pory"
	delay 15
# 84 "data/maps/AldeleafSmallHouse2/scripts.pory"
	turnobject 1, DIR_WEST
# 85 "data/maps/AldeleafSmallHouse2/scripts.pory"
	delay 60
	goto AldeleafSmallHouse2_Woman_41

AldeleafSmallHouse2_Woman_45:
# 105 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_ImMoving, MSGBOX_NPC
# 106 "data/maps/AldeleafSmallHouse2/scripts.pory"
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_57
AldeleafSmallHouse2_Woman_56:
	end

AldeleafSmallHouse2_Woman_48:
# 99 "data/maps/AldeleafSmallHouse2/scripts.pory"
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
# 100 "data/maps/AldeleafSmallHouse2/scripts.pory"
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_47

AldeleafSmallHouse2_Woman_51:
# 90 "data/maps/AldeleafSmallHouse2/scripts.pory"
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
# 91 "data/maps/AldeleafSmallHouse2/scripts.pory"
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_50

AldeleafSmallHouse2_Woman_54:
# 113 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_ImMoving, MSGBOX_NPC
# 114 "data/maps/AldeleafSmallHouse2/scripts.pory"
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_63
AldeleafSmallHouse2_Woman_62:
	end

AldeleafSmallHouse2_Woman_57:
# 107 "data/maps/AldeleafSmallHouse2/scripts.pory"
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
# 108 "data/maps/AldeleafSmallHouse2/scripts.pory"
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_56

AldeleafSmallHouse2_Woman_60:
# 121 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_WildPokemon, MSGBOX_NPC
# 122 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 12
	end

AldeleafSmallHouse2_Woman_63:
# 115 "data/maps/AldeleafSmallHouse2/scripts.pory"
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
# 116 "data/maps/AldeleafSmallHouse2/scripts.pory"
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_62

AldeleafSmallHouse2_Woman_65:
# 126 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_RestEasy, MSGBOX_NPC
	end


Aldeleaf_MoveGhost::
# 132 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 6
	goto_if_eq Aldeleaf_MoveGhost_3
Aldeleaf_MoveGhost_1:
# 141 "data/maps/AldeleafSmallHouse2/scripts.pory"
	release
	end

Aldeleaf_MoveGhost_2:
# 133 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setflag FLAG_GHOST_MOVED
# 134 "data/maps/AldeleafSmallHouse2/scripts.pory"
	safefollow
# 135 "data/maps/AldeleafSmallHouse2/scripts.pory"
	applymovement 2, AldeleafMoveGhost
# 136 "data/maps/AldeleafSmallHouse2/scripts.pory"
	delay 15
# 137 "data/maps/AldeleafSmallHouse2/scripts.pory"
	turnobject 1, DIR_WEST
# 138 "data/maps/AldeleafSmallHouse2/scripts.pory"
	release
	end

Aldeleaf_MoveGhost_3:
# 132 "data/maps/AldeleafSmallHouse2/scripts.pory"
	goto_if_unset FLAG_GHOST_MOVED, Aldeleaf_MoveGhost_2
	goto Aldeleaf_MoveGhost_1


# 145 "data/maps/AldeleafSmallHouse2/scripts.pory"
AldeleafMoveGhost:
# 146 "data/maps/AldeleafSmallHouse2/scripts.pory"
	walk_faster_up
	step_end

AldeleafSmallHouse2_Doll::
# 150 "data/maps/AldeleafSmallHouse2/scripts.pory"
	lock
# 151 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 0
	goto_if_eq AldeleafSmallHouse2_Doll_2
AldeleafSmallHouse2_Doll_1:
# 154 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 1
	goto_if_eq AldeleafSmallHouse2_Doll_5
# 162 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 2
	goto_if_eq AldeleafSmallHouse2_Doll_8
# 162 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 3
	goto_if_eq AldeleafSmallHouse2_Doll_8
# 162 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 4
	goto_if_eq AldeleafSmallHouse2_Doll_8
AldeleafSmallHouse2_Doll_7:
# 165 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 5
	goto_if_eq AldeleafSmallHouse2_Doll_15
# 173 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 6
	goto_if_eq AldeleafSmallHouse2_Doll_18
AldeleafSmallHouse2_Doll_17:
# 176 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 7
	goto_if_eq AldeleafSmallHouse2_Doll_21
# 184 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 8
	goto_if_eq AldeleafSmallHouse2_Doll_24
AldeleafSmallHouse2_Doll_23:
# 187 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 9
	goto_if_eq AldeleafSmallHouse2_Doll_27
AldeleafSmallHouse2_Doll_26:
# 190 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 10
	goto_if_eq AldeleafSmallHouse2_Doll_30
# 209 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 11
	goto_if_eq AldeleafSmallHouse2_Doll_33
AldeleafSmallHouse2_Doll_32:
# 212 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 12
	goto_if_eq AldeleafSmallHouse2_Doll_39
AldeleafSmallHouse2_Doll_38:
# 215 "data/maps/AldeleafSmallHouse2/scripts.pory"
	waitmessage
# 216 "data/maps/AldeleafSmallHouse2/scripts.pory"
	closemessage
# 217 "data/maps/AldeleafSmallHouse2/scripts.pory"
	release
	end

AldeleafSmallHouse2_Doll_2:
# 152 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_JustADoll, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_1

AldeleafSmallHouse2_Doll_5:
# 155 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_LooksLikeADoll, MSGBOX_DEFAULT
# 156 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 2
# 157 "data/maps/AldeleafSmallHouse2/scripts.pory"
	waitmessage
# 158 "data/maps/AldeleafSmallHouse2/scripts.pory"
	closemessage
# 159 "data/maps/AldeleafSmallHouse2/scripts.pory"
	release
	end

AldeleafSmallHouse2_Doll_8:
# 163 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_LooksLikeADoll, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_7

AldeleafSmallHouse2_Doll_15:
# 166 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_CertainlyMoved, MSGBOX_DEFAULT
# 167 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 6
# 168 "data/maps/AldeleafSmallHouse2/scripts.pory"
	waitmessage
# 169 "data/maps/AldeleafSmallHouse2/scripts.pory"
	closemessage
# 170 "data/maps/AldeleafSmallHouse2/scripts.pory"
	release
	end

AldeleafSmallHouse2_Doll_18:
# 174 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_CertainlyMoved, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_17

AldeleafSmallHouse2_Doll_21:
# 177 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_DefinitelyMoved, MSGBOX_DEFAULT
# 178 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 8
# 179 "data/maps/AldeleafSmallHouse2/scripts.pory"
	waitmessage
# 180 "data/maps/AldeleafSmallHouse2/scripts.pory"
	closemessage
# 181 "data/maps/AldeleafSmallHouse2/scripts.pory"
	release
	end

AldeleafSmallHouse2_Doll_24:
# 185 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_DefinitelyMoved, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_23

AldeleafSmallHouse2_Doll_27:
# 188 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_LooksLikeADoll, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_26

AldeleafSmallHouse2_Doll_30:
# 191 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_SpringsAlive, MSGBOX_DEFAULT
# 192 "data/maps/AldeleafSmallHouse2/scripts.pory"
	waitmessage
# 193 "data/maps/AldeleafSmallHouse2/scripts.pory"
	closemessage
# 194 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setwildbattle SPECIES_MIMIKYU, 15
# 195 "data/maps/AldeleafSmallHouse2/scripts.pory"
	dowildbattle
# 196 "data/maps/AldeleafSmallHouse2/scripts.pory"
	delay 20
# 197 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_TalismanBreaks, MSGBOX_NPC
# 198 "data/maps/AldeleafSmallHouse2/scripts.pory"
	removeitem ITEM_TALISMAN
# 199 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 11
# 200 "data/maps/AldeleafSmallHouse2/scripts.pory"
	waitmessage
# 201 "data/maps/AldeleafSmallHouse2/scripts.pory"
	closemessage
# 202 "data/maps/AldeleafSmallHouse2/scripts.pory"
	release
# 203 "data/maps/AldeleafSmallHouse2/scripts.pory"
	goto_if_set FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Doll_36
AldeleafSmallHouse2_Doll_35:
	end

AldeleafSmallHouse2_Doll_33:
# 210 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_ClearedDoll, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_32

AldeleafSmallHouse2_Doll_36:
# 204 "data/maps/AldeleafSmallHouse2/scripts.pory"
	completequest FLAG_Q05_ALDELEAF_CURSED_DOLL_COMPLETE
# 205 "data/maps/AldeleafSmallHouse2/scripts.pory"
	special ShowJournalPopupRemove
	goto AldeleafSmallHouse2_Doll_35

AldeleafSmallHouse2_Doll_39:
# 213 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_ClearedDoll, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_38


AldeleafSmallHouse2_Woman_Intro::
# 221 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "Eek!\n"
	.string "That Pikachu doll is haunted!\l"
	.string "I saw it move just a moment ago!$"

AldeleafSmallHouse2_Woman_ISwear::
# 226 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "I swear I saw it move!$"

AldeleafSmallHouse2_Woman_NotMovingNow::
# 229 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "Okay, maybe it isn't moving\n"
	.string "right now.\p"
	.string "But it definitely moved before\n"
	.string "you got here!$"

AldeleafSmallHouse2_Woman_ItMovedAgain::
# 235 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "It just moved again on its own!\n"
	.string "I swear I'm not lying!$"

AldeleafSmallHouse2_Woman_ItJustMoved::
# 239 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "Did you see that!?\n"
	.string "It just moved!!$"

AldeleafSmallHouse2_Woman_ImMoving::
# 243 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "Maybe the whole house is haunted!?\n"
	.string "I'm definitely moving as soon as I can…$"

AldeleafSmallHouse2_JustADoll::
# 248 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "It's a Pikachu doll.$"

AldeleafSmallHouse2_LooksLikeADoll::
# 251 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "It looks like any regular\n"
	.string "Pikachu doll.$"

AldeleafSmallHouse2_CertainlyMoved::
# 255 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "It looks like any regular\n"
	.string "Pikachu doll.\p"
	.string "The doll has certainly moved\n"
	.string "since your last visit.$"

AldeleafSmallHouse2_DefinitelyMoved::
# 261 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "Weird…\n"
	.string "Did the doll just move on its own?$"

AldeleafSmallHouse2_BestStayClear::
# 265 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "It looks like a regular Pikachu doll,\n"
	.string "though being in its presence\l"
	.string "gives you an ominous feeling.\p"
	.string "Maybe it's best to stay away from it\n"
	.string "for now…$"

AldeleafSmallHouse2_Woman_WildPokemon::
# 272 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "Oh, so the doll wasn't haunted\n"
	.string "and was simply being controlled\l"
	.string "by a wild Pokémon?\l"
	.string "That's a relief!$"

AldeleafSmallHouse2_Woman_RestEasy::
# 278 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "I feel like I can rest easy now.$"

AldeleafSmallHouse2_SpringsAlive::
# 282 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "The doll starts to shake\n"
	.string "as you approach it.\p"
	.string "… … … …\p"
	.string "Something emerges from the doll's\n"
	.string "shadow and leaps towards you!$"

AldeleafSmallHouse2_TalismanBreaks::
# 289 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "The doll has become inert.\p"
	.string "You notice the talisman in your bag\n"
	.string "has crumbled to dust.$"

AldeleafSmallHouse2_ClearedDoll::
# 294 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "It's a regular Pikachu doll.$"
