AdamantTowerExterior_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AdamantExteriorSetObject
	map_script MAP_SCRIPT_ON_LOAD, AdamantExteriorSetObject
	.byte 0


AdamantExteriorSetObject::
	goto_if_unset FLAG_SHOWED_BADGE, AdamantExteriorSetObject_2
AdamantExteriorSetObject_1:
	checkfollower
	compare VAR_RESULT, TRUE
	goto_if_eq AdamantExteriorSetObject_5
AdamantExteriorSetObject_4:
	end

AdamantExteriorSetObject_2:
	setobjectxyperm 1, 13, 7
	goto AdamantExteriorSetObject_1

AdamantExteriorSetObject_5:
	destroyfollower
	clearflag FLAG_OBTAINED_MEGA_RING
	setvar VAR_RIVAL_AROUND_SANDSTONE, 4
	clearflag FLAG_PARTNER_HEALS
	goto AdamantExteriorSetObject_4


AdamantExterior_Lass::
	msgbox AdamantExterior_Lass_Text, MSGBOX_NPC
	end


AdamantExterior_FatMan::
	msgbox AdamantExterior_FatMan_Text, MSGBOX_NPC
	return


AdamantExterior_Man3::
	goto_if_set FLAG_SHOWED_BADGE, AdamantExterior_Man3_2
	goto_if_unset FLAG_BADGE04_GET, AdamantExterior_Man3_5
	lock
	faceplayer
	msgbox AdamantExterior_Man3_NoAccess
	closemessage
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	msgbox AdamantDidntSeeBadge
	closemessage
	compare VAR_FACING, DIR_WEST
	goto_if_eq AdamantExterior_Man3_8
	applymovement 1, AdamantGuardStepAway
	setobjectxyperm 1, 14, 7
AdamantExterior_Man3_7:
	waitmovement 0
	setflag FLAG_SHOWED_BADGE
	release
	end

AdamantExterior_Man3_2:
	msgbox AdamantGoIn, MSGBOX_NPC
	end

AdamantExterior_Man3_5:
	msgbox AdamantExterior_Man3_NoAccess, MSGBOX_NPC
	end

AdamantExterior_Man3_8:
	applymovement 1, AdamantGuardStepAway2
	setobjectxyperm 1, 12, 7
	goto AdamantExterior_Man3_7


AdamantGuardStepAway:
	walk_right
	walk_in_place_down
	step_end

AdamantGuardStepAway2:
	walk_left
	walk_in_place_down
	step_end

AdamantExterior_Lass_Text::
	.string "I really want to see what the tower\n"
	.string "looks like from the inside, but they\l"
	.string "won't let the public in…$"

AdamantExterior_FatMan_Text::
	.string "I will defeat the Gym Leader and earn\n"
	.string "access to that place one day.\l"
	.string "You just watch me!$"

AdamantExterior_Man3_NoAccess::
	.string "I'm sorry, but only people authorized\n"
	.string "by the Sandstone Pokémon Gym Leader\l"
	.string "are allowed to enter.$"

AdamantGoIn::
	.string "There are many strong trainers training\n"
	.string "in the Adamant Tower.\p"
	.string "I hope you are prepared.$"

AdamantDidntSeeBadge::
	.string "Oh, I'm sorry, I didn't notice your\n"
	.string "Gym Badge. Please, go on in.$"
