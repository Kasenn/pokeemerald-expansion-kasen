AdamantTowerExterior_MapScripts::
# 2 "data/maps/AdamantTowerExterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AdamantExteriorSetObject
# 3 "data/maps/AdamantTowerExterior/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AdamantExteriorSetObject
	.byte 0


AdamantExteriorSetObject::
# 7 "data/maps/AdamantTowerExterior/scripts.pory"
	goto_if_unset FLAG_SHOWED_BADGE, AdamantExteriorSetObject_2
AdamantExteriorSetObject_1:
	checkfollowernpc
# 0 "data/maps/AdamantTowerExterior/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AdamantExteriorSetObject_5
AdamantExteriorSetObject_4:
	end

AdamantExteriorSetObject_2:
# 8 "data/maps/AdamantTowerExterior/scripts.pory"
	setobjectxyperm 1, 13, 7
	goto AdamantExteriorSetObject_1

AdamantExteriorSetObject_5:
# 11 "data/maps/AdamantTowerExterior/scripts.pory"
	destroyfollowernpc
# 12 "data/maps/AdamantTowerExterior/scripts.pory"
	clearflag FLAG_OBTAINED_MEGA_RING
# 13 "data/maps/AdamantTowerExterior/scripts.pory"
	clearflag FLAG_PARTNER_HEALS
# 14 "data/maps/AdamantTowerExterior/scripts.pory"
	setflag FLAG_REUNITE_WITH_RIVAL
	goto AdamantExteriorSetObject_4


AdamantExterior_Lass::
# 20 "data/maps/AdamantTowerExterior/scripts.pory"
	msgbox AdamantExterior_Lass_Text, MSGBOX_NPC
	end


AdamantExterior_FatMan::
# 29 "data/maps/AdamantTowerExterior/scripts.pory"
	msgbox AdamantExterior_FatMan_Text, MSGBOX_NPC
	return


AdamantExterior_Man3::
# 37 "data/maps/AdamantTowerExterior/scripts.pory"
	goto_if_set FLAG_SHOWED_BADGE, AdamantExterior_Man3_2
# 41 "data/maps/AdamantTowerExterior/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, AdamantExterior_Man3_5
# 45 "data/maps/AdamantTowerExterior/scripts.pory"
	lock
# 46 "data/maps/AdamantTowerExterior/scripts.pory"
	safefollow
# 47 "data/maps/AdamantTowerExterior/scripts.pory"
	faceplayer
# 48 "data/maps/AdamantTowerExterior/scripts.pory"
	msgbox AdamantExterior_Man3_NoAccess
# 49 "data/maps/AdamantTowerExterior/scripts.pory"
	closemessage
# 50 "data/maps/AdamantTowerExterior/scripts.pory"
	playse SE_PIN
# 51 "data/maps/AdamantTowerExterior/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 52 "data/maps/AdamantTowerExterior/scripts.pory"
	waitmovement 0
# 53 "data/maps/AdamantTowerExterior/scripts.pory"
	delay 48
# 54 "data/maps/AdamantTowerExterior/scripts.pory"
	msgbox AdamantDidntSeeBadge
# 55 "data/maps/AdamantTowerExterior/scripts.pory"
	closemessage
# 56 "data/maps/AdamantTowerExterior/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq AdamantExterior_Man3_8
# 61 "data/maps/AdamantTowerExterior/scripts.pory"
	applymovement 1, AdamantGuardStepAway
# 62 "data/maps/AdamantTowerExterior/scripts.pory"
	setobjectxyperm 1, 14, 7
AdamantExterior_Man3_7:
# 64 "data/maps/AdamantTowerExterior/scripts.pory"
	waitmovement 0
# 65 "data/maps/AdamantTowerExterior/scripts.pory"
	setflag FLAG_SHOWED_BADGE
# 66 "data/maps/AdamantTowerExterior/scripts.pory"
	release
	end

AdamantExterior_Man3_2:
# 38 "data/maps/AdamantTowerExterior/scripts.pory"
	msgbox AdamantGoIn, MSGBOX_NPC
	end

AdamantExterior_Man3_5:
# 42 "data/maps/AdamantTowerExterior/scripts.pory"
	msgbox AdamantExterior_Man3_NoAccess, MSGBOX_NPC
	end

AdamantExterior_Man3_8:
# 57 "data/maps/AdamantTowerExterior/scripts.pory"
	applymovement 1, AdamantGuardStepAway2
# 58 "data/maps/AdamantTowerExterior/scripts.pory"
	setobjectxyperm 1, 12, 7
	goto AdamantExterior_Man3_7


# 74 "data/maps/AdamantTowerExterior/scripts.pory"
AdamantGuardStepAway:
# 75 "data/maps/AdamantTowerExterior/scripts.pory"
	walk_right
# 76 "data/maps/AdamantTowerExterior/scripts.pory"
	walk_in_place_down
	step_end

# 78 "data/maps/AdamantTowerExterior/scripts.pory"
AdamantGuardStepAway2:
# 79 "data/maps/AdamantTowerExterior/scripts.pory"
	walk_left
# 80 "data/maps/AdamantTowerExterior/scripts.pory"
	walk_in_place_down
	step_end

AdamantExterior_Lass_Text::
# 23 "data/maps/AdamantTowerExterior/scripts.pory"
	.string "I really want to see what the tower\n"
	.string "looks like from the inside, but they\l"
	.string "won't let the public in…$"

AdamantExterior_FatMan_Text::
# 31 "data/maps/AdamantTowerExterior/scripts.pory"
	.string "I will defeat the Gym Leader and earn\n"
	.string "access to that place one day.\l"
	.string "You just watch me!$"

AdamantExterior_Man3_NoAccess::
# 69 "data/maps/AdamantTowerExterior/scripts.pory"
	.string "I'm sorry, but only people authorized\n"
	.string "by the Sandstone Pokémon Gym Leader\l"
	.string "are allowed to enter.$"

AdamantGoIn::
# 83 "data/maps/AdamantTowerExterior/scripts.pory"
	.string "There are many strong trainers training\n"
	.string "in the Adamant Tower.\p"
	.string "I hope you are prepared.$"

AdamantDidntSeeBadge::
# 88 "data/maps/AdamantTowerExterior/scripts.pory"
	.string "Oh, I'm sorry, I didn't notice your\n"
	.string "Gym Badge. Please, go on in.$"
