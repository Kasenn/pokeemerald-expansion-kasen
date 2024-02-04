Route28_MapScripts::
	.byte 0


Route28_BrotherTrigger_1::
	goto_if_set FLAG_ROUTE28_DESPAWN_BROTHER, Route28_BrotherTrigger_1_1
	lockall
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	applymovement 4, Route28_MoveBrother1
	waitmovement 4
	delay 15
	call Route28_BrotherFight
	applymovement 4, Route28BrotherLeaves1
	goto Route28_EndScript
	return

Route28_BrotherTrigger_1_1:
	release
	end


Route28_BrotherTrigger_2::
	goto_if_set FLAG_ROUTE28_DESPAWN_BROTHER, Route28_BrotherTrigger_2_1
	lockall
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	applymovement 4, Route28_MoveBrother2
	waitmovement 4
	delay 15
	call Route28_BrotherFight
	applymovement 4, Route28BrotherLeaves2
	goto Route28_EndScript
	return

Route28_BrotherTrigger_2_1:
	release
	end


Route28_EndScript::
	waitmovement 4
	delay 15
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
	removeobject 4
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end


Route28_MoveBrother1:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

Route28_MoveBrother2:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

Route28BrotherLeaves1:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route28BrotherLeaves2:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route28_BrotherFight::
	delay 10
	goto_if_set FLAG_BADGE02_GET, Route28_BrotherFight_2
	msgbox Route28_BrotherIntro, MSGBOX_DEFAULT
	waitmessage
	closemessage
	goto_if_set FLAG_UNUSED_PICKEDROWLET, Route28_BrotherFight_13
Route28_BrotherFight_12:
	goto_if_set FLAG_UNUSED_PICKEDTORCHIC, Route28_BrotherFight_19
Route28_BrotherFight_18:
	goto_if_set FLAG_UNUSED_PICKEDPIPLUP, Route28_BrotherFight_23
Route28_BrotherFight_1:
	goto_if_set FLAG_BADGE02_GET, Route28_BrotherFight_6
	msgbox Route28_BrotherPostBattleNoBadge, MSGBOX_DEFAULT
Route28_BrotherFight_5:
	waitmessage
	closemessage
	return

Route28_BrotherFight_2:
	msgbox Route28_BrotherIntroAfterGym, MSGBOX_DEFAULT
	waitmessage
	closemessage
	goto_if_set FLAG_UNUSED_PICKEDROWLET, Route28_BrotherFight_10
Route28_BrotherFight_9:
	goto_if_set FLAG_UNUSED_PICKEDTORCHIC, Route28_BrotherFight_16
Route28_BrotherFight_15:
	goto_if_set FLAG_UNUSED_PICKEDPIPLUP, Route28_BrotherFight_21
	goto Route28_BrotherFight_1

Route28_BrotherFight_6:
	msgbox Route28_BrotherPostBattle, MSGBOX_DEFAULT
	goto Route28_BrotherFight_5

Route28_BrotherFight_10:
	trainerbattle_no_intro TRAINER_BROTHER3_ROWLET, Route28_BrotherLost
	goto Route28_BrotherFight_9

Route28_BrotherFight_13:
	trainerbattle_no_intro TRAINER_BROTHER2_ROWLET, Route28_BrotherLost
	goto Route28_BrotherFight_12

Route28_BrotherFight_16:
	trainerbattle_no_intro TRAINER_BROTHER3_TORCHIC, Route28_BrotherLost
	goto Route28_BrotherFight_15

Route28_BrotherFight_19:
	trainerbattle_no_intro TRAINER_BROTHER2_TORCHIC, Route28_BrotherLost
	goto Route28_BrotherFight_18

Route28_BrotherFight_21:
	trainerbattle_no_intro TRAINER_BROTHER3_PIPLUP, Route28_BrotherLost
	goto Route28_BrotherFight_1

Route28_BrotherFight_23:
	trainerbattle_no_intro TRAINER_BROTHER2_PIPLUP, Route28_BrotherLost
	goto Route28_BrotherFight_1


Route28_BrotherIntro::
	.string "Thomas: Yo, {PLAYER}!\p"
	.string "I see you've finally made your way\n"
	.string "off the Coralgrove Islands.\p"
	.string "I wanted to head north to check out\n"
	.string "the Pokémon League in Snowcrest City\l"
	.string "but there's been an avalanche\l"
	.string "higher up the route so the way forward\l"
	.string "is completely cut off.\p"
	.string "In any case, I've gone and caught\n"
	.string "a lot of new Pokémon.\p"
	.string "Let's see if yours are any match\n"
	.string "to them!$"

Route28_BrotherIntroAfterGym::
	.string "Thomas: Yo, {PLAYER}!\p"
	.string "I see you've finally made your way\n"
	.string "off the Coralgrove Islands.\p"
	.string "I wanted to head north to check out\n"
	.string "the Pokémon League in Snowcrest City\l"
	.string "but there's been an avalanche\l"
	.string "higher up the route so the way forward\l"
	.string "is completely cut off.\p"
	.string "I see you've already gone and got\n"
	.string "the Dynamo Badge from the Aldeleaf Gym.\l"
	.string "Good, that means you're not a complete\l"
	.string "newbie anymore.\p"
	.string "In any case, I've gone and caught\n"
	.string "a lot of new Pokémon.\p"
	.string "Let's see if yours are any match\n"
	.string "to them!$"

Route28_BrotherLost::
	.string "I…Hm…Not quite the outcome\n"
	.string "I expected…\l"
	.string "Beginner's luck, maybe?$"

Route28_BrotherPostBattle::
	.string "$"

Route28_BrotherPostBattleNoBadge::
	.string "$"
