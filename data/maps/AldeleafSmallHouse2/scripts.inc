AldeleafSmallHouse2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AldeleafHouseEvent
	.byte 0


AldeleafHouseEvent::
	compare VAR_ALDELEAF_HOUSE, 3
	goto_if_eq AldeleafHouseEvent_2
	compare VAR_ALDELEAF_HOUSE, 4
	goto_if_eq AldeleafHouseEvent_5
	compare VAR_ALDELEAF_HOUSE, 5
	goto_if_eq AldeleafHouseEvent_5
	compare VAR_ALDELEAF_HOUSE, 6
	goto_if_ge AldeleafHouseEvent_9
	return

AldeleafHouseEvent_2:
	setvar VAR_ALDELEAF_HOUSE, 4
	setobjectxyperm 2, 0, 5
	end

AldeleafHouseEvent_5:
	setobjectxyperm 2, 0, 5
	end

AldeleafHouseEvent_9:
	setobjectxyperm 2, 0, 4
	end


AldeleafSmallHouse2_Woman::
	compare VAR_ALDELEAF_HOUSE, 0
	goto_if_eq AldeleafSmallHouse2_Woman_2
	compare VAR_ALDELEAF_HOUSE, 1
	goto_if_eq AldeleafSmallHouse2_Woman_5
	compare VAR_ALDELEAF_HOUSE, 5
	goto_if_eq AldeleafSmallHouse2_Woman_5
	compare VAR_ALDELEAF_HOUSE, 7
	goto_if_eq AldeleafSmallHouse2_Woman_5
	compare VAR_ALDELEAF_HOUSE, 2
	goto_if_eq AldeleafSmallHouse2_Woman_15
	compare VAR_ALDELEAF_HOUSE, 3
	goto_if_eq AldeleafSmallHouse2_Woman_21
	compare VAR_ALDELEAF_HOUSE, 4
	goto_if_eq AldeleafSmallHouse2_Woman_27
	compare VAR_ALDELEAF_HOUSE, 6
	goto_if_eq AldeleafSmallHouse2_Woman_33
	compare VAR_ALDELEAF_HOUSE, 8
	goto_if_eq AldeleafSmallHouse2_Woman_39
	compare VAR_ALDELEAF_HOUSE, 9
	goto_if_eq AldeleafSmallHouse2_Woman_45
	compare VAR_ALDELEAF_HOUSE, 10
	goto_if_eq AldeleafSmallHouse2_Woman_54
	compare VAR_ALDELEAF_HOUSE, 11
	goto_if_eq AldeleafSmallHouse2_Woman_60
	compare VAR_ALDELEAF_HOUSE, 12
	goto_if_eq AldeleafSmallHouse2_Woman_65
	return

AldeleafSmallHouse2_Woman_2:
	msgbox AldeleafSmallHouse2_Woman_Intro, MSGBOX_NPC
	setvar VAR_ALDELEAF_HOUSE, 1
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_12
AldeleafSmallHouse2_Woman_11:
	end

AldeleafSmallHouse2_Woman_5:
	msgbox AldeleafSmallHouse2_Woman_ISwear, MSGBOX_NPC
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_18
AldeleafSmallHouse2_Woman_17:
	end

AldeleafSmallHouse2_Woman_12:
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_11

AldeleafSmallHouse2_Woman_15:
	msgbox AldeleafSmallHouse2_Woman_NotMovingNow, MSGBOX_NPC
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_24
AldeleafSmallHouse2_Woman_23:
	setvar VAR_ALDELEAF_HOUSE, 3
	end

AldeleafSmallHouse2_Woman_18:
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_17

AldeleafSmallHouse2_Woman_21:
	msgbox AldeleafSmallHouse2_Woman_NotMovingNow, MSGBOX_NPC
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_30
AldeleafSmallHouse2_Woman_29:
	end

AldeleafSmallHouse2_Woman_24:
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_23

AldeleafSmallHouse2_Woman_27:
	msgbox AldeleafSmallHouse2_Woman_ItMovedAgain, MSGBOX_NPC
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_36
AldeleafSmallHouse2_Woman_35:
	setvar VAR_ALDELEAF_HOUSE, 5
	end

AldeleafSmallHouse2_Woman_30:
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_29

AldeleafSmallHouse2_Woman_33:
	goto_if_unset FLAG_GHOST_MOVED, AldeleafSmallHouse2_Woman_42
AldeleafSmallHouse2_Woman_41:
	msgbox AldeleafSmallHouse2_Woman_ItJustMoved, MSGBOX_NPC
	setvar VAR_ALDELEAF_HOUSE, 7
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_51
AldeleafSmallHouse2_Woman_50:
	end

AldeleafSmallHouse2_Woman_36:
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_35

AldeleafSmallHouse2_Woman_39:
	msgbox AldeleafSmallHouse2_Woman_ImMoving, MSGBOX_NPC
	setvar VAR_ALDELEAF_HOUSE, 9
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_48
AldeleafSmallHouse2_Woman_47:
	end

AldeleafSmallHouse2_Woman_42:
	lock
	setflag FLAG_GHOST_MOVED
	safefollow
	applymovement 2, AldeleafMoveGhost
	delay 15
	turnobject 1, DIR_WEST
	delay 60
	goto AldeleafSmallHouse2_Woman_41

AldeleafSmallHouse2_Woman_45:
	msgbox AldeleafSmallHouse2_Woman_ImMoving, MSGBOX_NPC
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_57
AldeleafSmallHouse2_Woman_56:
	end

AldeleafSmallHouse2_Woman_48:
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_47

AldeleafSmallHouse2_Woman_51:
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_50

AldeleafSmallHouse2_Woman_54:
	msgbox AldeleafSmallHouse2_Woman_ImMoving, MSGBOX_NPC
	goto_if_unset FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Woman_63
AldeleafSmallHouse2_Woman_62:
	end

AldeleafSmallHouse2_Woman_57:
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_56

AldeleafSmallHouse2_Woman_60:
	msgbox AldeleafSmallHouse2_Woman_WildPokemon, MSGBOX_NPC
	setvar VAR_ALDELEAF_HOUSE, 12
	end

AldeleafSmallHouse2_Woman_63:
	startquest FLAG_Q05_ALDELEAF_CURSED_DOLL_START
	special ShowJournalPopupAdd
	goto AldeleafSmallHouse2_Woman_62

AldeleafSmallHouse2_Woman_65:
	msgbox AldeleafSmallHouse2_Woman_RestEasy, MSGBOX_NPC
	end


Aldeleaf_MoveGhost::
	compare VAR_ALDELEAF_HOUSE, 6
	goto_if_eq Aldeleaf_MoveGhost_3
Aldeleaf_MoveGhost_1:
	release
	end

Aldeleaf_MoveGhost_2:
	setflag FLAG_GHOST_MOVED
	safefollow
	applymovement 2, AldeleafMoveGhost
	delay 15
	turnobject 1, DIR_WEST
	release
	end

Aldeleaf_MoveGhost_3:
	goto_if_unset FLAG_GHOST_MOVED, Aldeleaf_MoveGhost_2
	goto Aldeleaf_MoveGhost_1


AldeleafMoveGhost:
	walk_faster_up
	step_end

AldeleafSmallHouse2_Doll::
	lock
	compare VAR_ALDELEAF_HOUSE, 0
	goto_if_eq AldeleafSmallHouse2_Doll_2
AldeleafSmallHouse2_Doll_1:
	compare VAR_ALDELEAF_HOUSE, 1
	goto_if_eq AldeleafSmallHouse2_Doll_5
	compare VAR_ALDELEAF_HOUSE, 2
	goto_if_eq AldeleafSmallHouse2_Doll_8
	compare VAR_ALDELEAF_HOUSE, 3
	goto_if_eq AldeleafSmallHouse2_Doll_8
	compare VAR_ALDELEAF_HOUSE, 4
	goto_if_eq AldeleafSmallHouse2_Doll_8
AldeleafSmallHouse2_Doll_7:
	compare VAR_ALDELEAF_HOUSE, 5
	goto_if_eq AldeleafSmallHouse2_Doll_15
	compare VAR_ALDELEAF_HOUSE, 6
	goto_if_eq AldeleafSmallHouse2_Doll_18
AldeleafSmallHouse2_Doll_17:
	compare VAR_ALDELEAF_HOUSE, 7
	goto_if_eq AldeleafSmallHouse2_Doll_21
	compare VAR_ALDELEAF_HOUSE, 8
	goto_if_eq AldeleafSmallHouse2_Doll_24
AldeleafSmallHouse2_Doll_23:
	compare VAR_ALDELEAF_HOUSE, 9
	goto_if_eq AldeleafSmallHouse2_Doll_27
AldeleafSmallHouse2_Doll_26:
	compare VAR_ALDELEAF_HOUSE, 10
	goto_if_eq AldeleafSmallHouse2_Doll_30
	compare VAR_ALDELEAF_HOUSE, 11
	goto_if_eq AldeleafSmallHouse2_Doll_33
AldeleafSmallHouse2_Doll_32:
	compare VAR_ALDELEAF_HOUSE, 12
	goto_if_eq AldeleafSmallHouse2_Doll_39
AldeleafSmallHouse2_Doll_38:
	waitmessage
	closemessage
	release
	end

AldeleafSmallHouse2_Doll_2:
	msgbox AldeleafSmallHouse2_JustADoll, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_1

AldeleafSmallHouse2_Doll_5:
	msgbox AldeleafSmallHouse2_LooksLikeADoll, MSGBOX_DEFAULT
	setvar VAR_ALDELEAF_HOUSE, 2
	waitmessage
	closemessage
	release
	end

AldeleafSmallHouse2_Doll_8:
	msgbox AldeleafSmallHouse2_LooksLikeADoll, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_7

AldeleafSmallHouse2_Doll_15:
	msgbox AldeleafSmallHouse2_CertainlyMoved, MSGBOX_DEFAULT
	setvar VAR_ALDELEAF_HOUSE, 6
	waitmessage
	closemessage
	release
	end

AldeleafSmallHouse2_Doll_18:
	msgbox AldeleafSmallHouse2_CertainlyMoved, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_17

AldeleafSmallHouse2_Doll_21:
	msgbox AldeleafSmallHouse2_DefinitelyMoved, MSGBOX_DEFAULT
	setvar VAR_ALDELEAF_HOUSE, 8
	waitmessage
	closemessage
	release
	end

AldeleafSmallHouse2_Doll_24:
	msgbox AldeleafSmallHouse2_DefinitelyMoved, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_23

AldeleafSmallHouse2_Doll_27:
	msgbox AldeleafSmallHouse2_LooksLikeADoll, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_26

AldeleafSmallHouse2_Doll_30:
	msgbox AldeleafSmallHouse2_SpringsAlive, MSGBOX_DEFAULT
	waitmessage
	closemessage
	setwildbattle SPECIES_MIMIKYU, 15
	dowildbattle
	delay 20
	msgbox AldeleafSmallHouse2_TalismanBreaks, MSGBOX_NPC
	removeitem ITEM_TALISMAN
	setvar VAR_ALDELEAF_HOUSE, 11
	waitmessage
	closemessage
	release
	goto_if_set FLAG_Q05_ALDELEAF_CURSED_DOLL_START, AldeleafSmallHouse2_Doll_36
AldeleafSmallHouse2_Doll_35:
	end

AldeleafSmallHouse2_Doll_33:
	msgbox AldeleafSmallHouse2_ClearedDoll, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_32

AldeleafSmallHouse2_Doll_36:
	completequest FLAG_Q05_ALDELEAF_CURSED_DOLL_COMPLETE
	special ShowJournalPopupRemove
	goto AldeleafSmallHouse2_Doll_35

AldeleafSmallHouse2_Doll_39:
	msgbox AldeleafSmallHouse2_ClearedDoll, MSGBOX_DEFAULT
	goto AldeleafSmallHouse2_Doll_38


AldeleafSmallHouse2_Woman_Intro::
	.string "Eek!\n"
	.string "That Pikachu doll is haunted!\l"
	.string "I saw it move just a moment ago!$"

AldeleafSmallHouse2_Woman_ISwear::
	.string "I swear I saw it move!$"

AldeleafSmallHouse2_Woman_NotMovingNow::
	.string "Okay, maybe it isn't moving\n"
	.string "right now.\p"
	.string "But it definitely moved before\n"
	.string "you got here!$"

AldeleafSmallHouse2_Woman_ItMovedAgain::
	.string "It just moved again on its own!\n"
	.string "I swear I'm not lying!$"

AldeleafSmallHouse2_Woman_ItJustMoved::
	.string "Did you see that!?\n"
	.string "It just moved!!$"

AldeleafSmallHouse2_Woman_ImMoving::
	.string "Maybe the whole house is haunted!?\n"
	.string "I'm definitely moving as soon as I can…$"

AldeleafSmallHouse2_JustADoll::
	.string "It's a Pikachu doll.$"

AldeleafSmallHouse2_LooksLikeADoll::
	.string "It looks like any regular\n"
	.string "Pikachu doll.$"

AldeleafSmallHouse2_CertainlyMoved::
	.string "It looks like any regular\n"
	.string "Pikachu doll.\p"
	.string "The doll has certainly moved\n"
	.string "since your last visit.$"

AldeleafSmallHouse2_DefinitelyMoved::
	.string "Weird…\n"
	.string "Did the doll just move on its own?$"

AldeleafSmallHouse2_BestStayClear::
	.string "It looks like a regular Pikachu doll,\n"
	.string "though being in its presence\l"
	.string "gives you an ominous feeling.\p"
	.string "Maybe it's best to stay away from it\n"
	.string "for now…$"

AldeleafSmallHouse2_Woman_WildPokemon::
	.string "Oh, so the doll wasn't haunted\n"
	.string "and was simply being controlled\l"
	.string "by a wild Pokémon?\l"
	.string "That's a relief!$"

AldeleafSmallHouse2_Woman_RestEasy::
	.string "I feel like I can rest easy now.$"

AldeleafSmallHouse2_SpringsAlive::
	.string "The doll starts to shake\n"
	.string "as you approach it.\p"
	.string "… … … …\p"
	.string "Something emerges from the doll's\n"
	.string "shadow and leaps towards you!$"

AldeleafSmallHouse2_TalismanBreaks::
	.string "The doll has become inert.\p"
	.string "You notice the talisman in your bag\n"
	.string "has crumbled to dust.$"

AldeleafSmallHouse2_ClearedDoll::
	.string "It's a regular Pikachu doll.$"
