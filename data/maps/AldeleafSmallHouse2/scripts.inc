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
# 39 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 1
	goto_if_eq AldeleafSmallHouse2_Woman_5
# 39 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 5
	goto_if_eq AldeleafSmallHouse2_Woman_5
# 39 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 7
	goto_if_eq AldeleafSmallHouse2_Woman_5
# 43 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 2
	goto_if_eq AldeleafSmallHouse2_Woman_12
# 48 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 3
	goto_if_eq AldeleafSmallHouse2_Woman_15
# 52 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 4
	goto_if_eq AldeleafSmallHouse2_Woman_18
# 57 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 6
	goto_if_eq AldeleafSmallHouse2_Woman_21
# 71 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 8
	goto_if_eq AldeleafSmallHouse2_Woman_24
# 76 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 9
	goto_if_eq AldeleafSmallHouse2_Woman_30
# 80 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 10
	goto_if_eq AldeleafSmallHouse2_Woman_33
# 84 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 11
	goto_if_eq AldeleafSmallHouse2_Woman_36
# 89 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 12
	goto_if_eq AldeleafSmallHouse2_Woman_38
	return

AldeleafSmallHouse2_Woman_2:
# 35 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_Intro, MSGBOX_NPC
# 36 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 1
	end

AldeleafSmallHouse2_Woman_5:
# 40 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_ISwear, MSGBOX_NPC
	end

AldeleafSmallHouse2_Woman_12:
# 44 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_NotMovingNow, MSGBOX_NPC
# 45 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 3
	end

AldeleafSmallHouse2_Woman_15:
# 49 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_NotMovingNow, MSGBOX_NPC
	end

AldeleafSmallHouse2_Woman_18:
# 53 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_ItMovedAgain, MSGBOX_NPC
# 54 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 5
	end

AldeleafSmallHouse2_Woman_21:
# 58 "data/maps/AldeleafSmallHouse2/scripts.pory"
	goto_if_unset FLAG_GHOST_MOVED, AldeleafSmallHouse2_Woman_27
AldeleafSmallHouse2_Woman_26:
# 67 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_ItJustMoved, MSGBOX_NPC
# 68 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 7
	end

AldeleafSmallHouse2_Woman_24:
# 72 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_ImMoving, MSGBOX_NPC
# 73 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 9
	end

AldeleafSmallHouse2_Woman_27:
# 59 "data/maps/AldeleafSmallHouse2/scripts.pory"
	lock
# 60 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setflag FLAG_GHOST_MOVED
# 61 "data/maps/AldeleafSmallHouse2/scripts.pory"
	safefollow
# 62 "data/maps/AldeleafSmallHouse2/scripts.pory"
	applymovement 2, AldeleafMoveGhost
# 63 "data/maps/AldeleafSmallHouse2/scripts.pory"
	delay 15
# 64 "data/maps/AldeleafSmallHouse2/scripts.pory"
	turnobject 1, DIR_WEST
# 65 "data/maps/AldeleafSmallHouse2/scripts.pory"
	delay 60
	goto AldeleafSmallHouse2_Woman_26

AldeleafSmallHouse2_Woman_30:
# 77 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_ImMoving, MSGBOX_NPC
	end

AldeleafSmallHouse2_Woman_33:
# 81 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_ImMoving, MSGBOX_NPC
	end

AldeleafSmallHouse2_Woman_36:
# 85 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_WildPokemon, MSGBOX_NPC
# 86 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 12
	end

AldeleafSmallHouse2_Woman_38:
# 90 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_Woman_RestEasy, MSGBOX_NPC
	end


Aldeleaf_MoveGhost::
# 96 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 6
	goto_if_eq Aldeleaf_MoveGhost_3
Aldeleaf_MoveGhost_1:
# 105 "data/maps/AldeleafSmallHouse2/scripts.pory"
	release
	end

Aldeleaf_MoveGhost_2:
# 97 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setflag FLAG_GHOST_MOVED
# 98 "data/maps/AldeleafSmallHouse2/scripts.pory"
	safefollow
# 99 "data/maps/AldeleafSmallHouse2/scripts.pory"
	applymovement 2, AldeleafMoveGhost
# 100 "data/maps/AldeleafSmallHouse2/scripts.pory"
	delay 15
# 101 "data/maps/AldeleafSmallHouse2/scripts.pory"
	turnobject 1, DIR_WEST
# 102 "data/maps/AldeleafSmallHouse2/scripts.pory"
	release
	end

Aldeleaf_MoveGhost_3:
# 96 "data/maps/AldeleafSmallHouse2/scripts.pory"
	goto_if_unset FLAG_GHOST_MOVED, Aldeleaf_MoveGhost_2
	goto Aldeleaf_MoveGhost_1


# 109 "data/maps/AldeleafSmallHouse2/scripts.pory"
AldeleafMoveGhost:
# 110 "data/maps/AldeleafSmallHouse2/scripts.pory"
	walk_faster_up
	step_end

AldeleafSmallHouse2_Doll::
# 114 "data/maps/AldeleafSmallHouse2/scripts.pory"
	lockall
# 115 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 0
	goto_if_eq AldeleafSmallHouse2_Doll_2
AldeleafSmallHouse2_Doll_1:
# 118 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 1
	goto_if_eq AldeleafSmallHouse2_Doll_5
# 126 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 2
	goto_if_eq AldeleafSmallHouse2_Doll_8
# 126 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 3
	goto_if_eq AldeleafSmallHouse2_Doll_8
# 126 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 4
	goto_if_eq AldeleafSmallHouse2_Doll_8
AldeleafSmallHouse2_Doll_7:
# 129 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 5
	goto_if_eq AldeleafSmallHouse2_Doll_15
# 137 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 6
	goto_if_eq AldeleafSmallHouse2_Doll_18
AldeleafSmallHouse2_Doll_17:
# 140 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 7
	goto_if_eq AldeleafSmallHouse2_Doll_21
# 148 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 8
	goto_if_eq AldeleafSmallHouse2_Doll_24
AldeleafSmallHouse2_Doll_23:
# 151 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 9
	goto_if_eq AldeleafSmallHouse2_Doll_27
AldeleafSmallHouse2_Doll_26:
# 154 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 10
	goto_if_eq AldeleafSmallHouse2_Doll_30
# 169 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 11
	goto_if_eq AldeleafSmallHouse2_Doll_33
AldeleafSmallHouse2_Doll_32:
# 172 "data/maps/AldeleafSmallHouse2/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 12
	goto_if_eq AldeleafSmallHouse2_Doll_36
AldeleafSmallHouse2_Doll_35:
# 175 "data/maps/AldeleafSmallHouse2/scripts.pory"
	waitmessage
# 176 "data/maps/AldeleafSmallHouse2/scripts.pory"
	closemessage
# 177 "data/maps/AldeleafSmallHouse2/scripts.pory"
	release
	end

AldeleafSmallHouse2_Doll_2:
# 116 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_JustADoll, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_1

AldeleafSmallHouse2_Doll_5:
# 119 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_LooksLikeADoll, MSGBOX_DEFAULT
# 120 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 2
# 121 "data/maps/AldeleafSmallHouse2/scripts.pory"
	waitmessage
# 122 "data/maps/AldeleafSmallHouse2/scripts.pory"
	closemessage
# 123 "data/maps/AldeleafSmallHouse2/scripts.pory"
	release
	end

AldeleafSmallHouse2_Doll_8:
# 127 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_LooksLikeADoll, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_7

AldeleafSmallHouse2_Doll_15:
# 130 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_CertainlyMoved, MSGBOX_DEFAULT
# 131 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 6
# 132 "data/maps/AldeleafSmallHouse2/scripts.pory"
	waitmessage
# 133 "data/maps/AldeleafSmallHouse2/scripts.pory"
	closemessage
# 134 "data/maps/AldeleafSmallHouse2/scripts.pory"
	release
	end

AldeleafSmallHouse2_Doll_18:
# 138 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_CertainlyMoved, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_17

AldeleafSmallHouse2_Doll_21:
# 141 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_DefinitelyMoved, MSGBOX_DEFAULT
# 142 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 8
# 143 "data/maps/AldeleafSmallHouse2/scripts.pory"
	waitmessage
# 144 "data/maps/AldeleafSmallHouse2/scripts.pory"
	closemessage
# 145 "data/maps/AldeleafSmallHouse2/scripts.pory"
	release
	end

AldeleafSmallHouse2_Doll_24:
# 149 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_DefinitelyMoved, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_23

AldeleafSmallHouse2_Doll_27:
# 152 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_LooksLikeADoll, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_26

AldeleafSmallHouse2_Doll_30:
# 155 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_SpringsAlive, MSGBOX_DEFAULT
# 156 "data/maps/AldeleafSmallHouse2/scripts.pory"
	waitmessage
# 157 "data/maps/AldeleafSmallHouse2/scripts.pory"
	closemessage
# 158 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setwildbattle SPECIES_MIMIKYU, 15
# 159 "data/maps/AldeleafSmallHouse2/scripts.pory"
	dowildbattle
# 160 "data/maps/AldeleafSmallHouse2/scripts.pory"
	delay 20
# 161 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_TalismanBreaks, MSGBOX_NPC
# 162 "data/maps/AldeleafSmallHouse2/scripts.pory"
	removeitem ITEM_TALISMAN
# 163 "data/maps/AldeleafSmallHouse2/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 11
# 164 "data/maps/AldeleafSmallHouse2/scripts.pory"
	waitmessage
# 165 "data/maps/AldeleafSmallHouse2/scripts.pory"
	closemessage
# 166 "data/maps/AldeleafSmallHouse2/scripts.pory"
	release
	end

AldeleafSmallHouse2_Doll_33:
# 170 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_ClearedDoll, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_32

AldeleafSmallHouse2_Doll_36:
# 173 "data/maps/AldeleafSmallHouse2/scripts.pory"
	msgbox AldeleafSmallHouse2_ClearedDoll, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_35


AldeleafSmallHouse2_Woman_Intro::
# 181 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "Eek!\n"
	.string "That Pikachu doll is haunted!\l"
	.string "I saw it move just a moment ago!$"

AldeleafSmallHouse2_Woman_ISwear::
# 186 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "I swear I saw it move!$"

AldeleafSmallHouse2_Woman_NotMovingNow::
# 189 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "Okay, maybe it isn't moving\n"
	.string "right now.\p"
	.string "But it definitely moved before\n"
	.string "you got here!$"

AldeleafSmallHouse2_Woman_ItMovedAgain::
# 195 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "It just moved again on its own!\n"
	.string "I swear I'm not lying!$"

AldeleafSmallHouse2_Woman_ItJustMoved::
# 199 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "Did you see that!?\n"
	.string "It just moved!!$"

AldeleafSmallHouse2_Woman_ImMoving::
# 203 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "Maybe the whole house is haunted!?\n"
	.string "I'm definitely moving as soon as I can…$"

AldeleafSmallHouse2_JustADoll::
# 208 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "It's a Pikachu doll.$"

AldeleafSmallHouse2_LooksLikeADoll::
# 211 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "It looks like any regular\n"
	.string "Pikachu doll.$"

AldeleafSmallHouse2_CertainlyMoved::
# 215 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "It looks like any regular\n"
	.string "Pikachu doll.\p"
	.string "The doll has certainly moved\n"
	.string "since your last visit.$"

AldeleafSmallHouse2_DefinitelyMoved::
# 221 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "Weird…\n"
	.string "Did the doll just move on its own?$"

AldeleafSmallHouse2_BestStayClear::
# 225 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "It looks like a regular Pikachu doll,\n"
	.string "though being in its presence\l"
	.string "gives you an ominous feeling.\p"
	.string "Maybe it's best to stay away from it\n"
	.string "for now…$"

AldeleafSmallHouse2_Woman_WildPokemon::
# 232 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "Oh, so the doll wasn't haunted\n"
	.string "and was simply being controlled\l"
	.string "by a wild Pokémon?\l"
	.string "That's a relief!$"

AldeleafSmallHouse2_Woman_RestEasy::
# 238 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "I feel like I can rest easy now.$"

AldeleafSmallHouse2_SpringsAlive::
# 242 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "The doll starts to shake\n"
	.string "as you approach it.\p"
	.string "… … … …\p"
	.string "Something emerges from the doll's\n"
	.string "shadow and leaps towards you!$"

AldeleafSmallHouse2_TalismanBreaks::
# 249 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "The doll has become inert.\p"
	.string "You notice the talisman in your bag\n"
	.string "has crumbled to dust.$"

AldeleafSmallHouse2_ClearedDoll::
# 254 "data/maps/AldeleafSmallHouse2/scripts.pory"
	.string "It's a regular Pikachu doll.$"
