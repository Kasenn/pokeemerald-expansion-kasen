Kaolisle_Mines_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KaolisleEscape
	.byte 0


KaolisleEscape::
	setescapewarp MAP_KAOLISLE_CITY, 28, 33
	return


KaolMines_Miner1::
	checkitem ITEM_ESCAPE_ROPE
	compare VAR_RESULT, FALSE
	goto_if_eq KaolMines_Miner1_2
	msgbox KaolMines_Miner1_YesRope, MSGBOX_NPC
	end

KaolMines_Miner1_2:
	lock
	faceplayer
	msgbox KaolMines_Miner1_NoRope, MSGBOX_DEFAULT
	giveitem ITEM_ESCAPE_ROPE
	msgbox KaolMines_Miner1_IfLost, MSGBOX_NPC
	end


KaolMines_Miner2::
	msgbox KaolMines_Miner2_Text, MSGBOX_NPC
	end


KaolMines_Miner3::
	msgbox KaolMines_Miner3_Text, MSGBOX_NPC
	end


KaolMines_Excadrill1::
	call KaolMines_Excadrill
	turnobject 13, DIR_WEST
	end


KaolMines_Excadrill2::
	call KaolMines_Excadrill
	turnobject 15, DIR_SOUTH
	end


KaolMines_Excadrill3::
	call KaolMines_Excadrill
	turnobject 11, DIR_NORTH
	end


KaolMines_Excadrill4::
	call KaolMines_Excadrill
	turnobject 14, DIR_EAST
	end


KaolMines_Excadrill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_EXCADRILL, CRY_MODE_NORMAL
	waitmoncry
	release
	return


FindItem_Fossil::
	random 11
	switch VAR_RESULT
	case 0, FindItem_Fossil_2
	case 1, FindItem_Fossil_3
	case 2, FindItem_Fossil_4
	case 3, FindItem_Fossil_5
	case 4, FindItem_Fossil_6
	case 5, FindItem_Fossil_7
	case 6, FindItem_Fossil_8
	case 7, FindItem_Fossil_9
	case 8, FindItem_Fossil_10
	case 9, FindItem_Fossil_11
	case 10, FindItem_Fossil_12
	return

FindItem_Fossil_2:
	goto LootHelixGlobal
	return

FindItem_Fossil_3:
	goto LootDomeGlobal
	return

FindItem_Fossil_4:
	goto LootOldAmberGlobal
	return

FindItem_Fossil_5:
	goto LootRootGlobal
	return

FindItem_Fossil_6:
	goto LootClawGlobal
	return

FindItem_Fossil_7:
	goto LootSkullGlobal
	return

FindItem_Fossil_8:
	goto LootArmorGlobal
	return

FindItem_Fossil_9:
	goto LootCoverGlobal
	return

FindItem_Fossil_10:
	goto LootPlumeGlobal
	return

FindItem_Fossil_11:
	goto LootJawGlobal
	return

FindItem_Fossil_12:
	goto LootSailGlobal
	return


LootHelixGlobal::
	goto_if_set FLAG_OBTAINED_HELIX_FOSSIL, LootHelixGlobal_2
LootHelixGlobal_1:
	finditem ITEM_HELIX_FOSSIL
	setflag FLAG_OBTAINED_HELIX_FOSSIL
	goto FossilScriptEnd
	return

LootHelixGlobal_2:
	goto FindItem_Fossil
	goto LootHelixGlobal_1


LootDomeGlobal::
	goto_if_set FLAG_OBTAINED_DOME_FOSSIL, LootDomeGlobal_2
LootDomeGlobal_1:
	finditem ITEM_DOME_FOSSIL
	setflag FLAG_OBTAINED_DOME_FOSSIL
	goto FossilScriptEnd
	return

LootDomeGlobal_2:
	goto FindItem_Fossil
	goto LootDomeGlobal_1


LootOldAmberGlobal::
	goto_if_set FLAG_OBTAINED_OLDAMBER_FOSSIL, LootOldAmberGlobal_2
LootOldAmberGlobal_1:
	finditem ITEM_OLD_AMBER
	setflag FLAG_OBTAINED_OLDAMBER_FOSSIL
	goto FossilScriptEnd
	return

LootOldAmberGlobal_2:
	goto FindItem_Fossil
	goto LootOldAmberGlobal_1


LootRootGlobal::
	goto_if_set FLAG_OBTAINED_ROOT_FOSSIL, LootRootGlobal_2
LootRootGlobal_1:
	finditem ITEM_ROOT_FOSSIL
	setflag FLAG_OBTAINED_ROOT_FOSSIL
	goto FossilScriptEnd
	return

LootRootGlobal_2:
	goto FindItem_Fossil
	goto LootRootGlobal_1


LootClawGlobal::
	goto_if_set FLAG_OBTAINED_CLAW_FOSSIL, LootClawGlobal_2
LootClawGlobal_1:
	finditem ITEM_CLAW_FOSSIL
	setflag FLAG_OBTAINED_CLAW_FOSSIL
	goto FossilScriptEnd
	return

LootClawGlobal_2:
	goto FindItem_Fossil
	goto LootClawGlobal_1


LootSkullGlobal::
	goto_if_set FLAG_OBTAINED_SKULL_FOSSIL, LootSkullGlobal_2
LootSkullGlobal_1:
	finditem ITEM_SKULL_FOSSIL
	setflag FLAG_OBTAINED_SKULL_FOSSIL
	goto FossilScriptEnd
	return

LootSkullGlobal_2:
	goto FindItem_Fossil
	goto LootSkullGlobal_1


LootArmorGlobal::
	goto_if_set FLAG_OBTAINED_ARMOR_FOSSIL, LootArmorGlobal_2
LootArmorGlobal_1:
	finditem ITEM_ARMOR_FOSSIL
	setflag FLAG_OBTAINED_ARMOR_FOSSIL
	goto FossilScriptEnd
	return

LootArmorGlobal_2:
	goto FindItem_Fossil
	goto LootArmorGlobal_1


LootCoverGlobal::
	goto_if_set FLAG_OBTAINED_COVER_FOSSIL, LootCoverGlobal_2
LootCoverGlobal_1:
	finditem ITEM_COVER_FOSSIL
	setflag FLAG_OBTAINED_COVER_FOSSIL
	goto FossilScriptEnd
	return

LootCoverGlobal_2:
	goto FindItem_Fossil
	goto LootCoverGlobal_1


LootPlumeGlobal::
	goto_if_set FLAG_OBTAINED_PLUME_FOSSIL, LootPlumeGlobal_2
LootPlumeGlobal_1:
	finditem ITEM_PLUME_FOSSIL
	setflag FLAG_OBTAINED_PLUME_FOSSIL
	goto FossilScriptEnd
	return

LootPlumeGlobal_2:
	goto FindItem_Fossil
	goto LootPlumeGlobal_1


LootJawGlobal::
	goto_if_set FLAG_OBTAINED_JAW_FOSSIL, LootJawGlobal_2
LootJawGlobal_1:
	finditem ITEM_JAW_FOSSIL
	setflag FLAG_OBTAINED_JAW_FOSSIL
	goto FossilScriptEnd
	return

LootJawGlobal_2:
	goto FindItem_Fossil
	goto LootJawGlobal_1


LootSailGlobal::
	goto_if_set FLAG_OBTAINED_SAIL_FOSSIL, LootSailGlobal_2
LootSailGlobal_1:
	finditem ITEM_SAIL_FOSSIL
	setflag FLAG_OBTAINED_SAIL_FOSSIL
	goto FossilScriptEnd
	return

LootSailGlobal_2:
	goto FindItem_Fossil
	goto LootSailGlobal_1


FossilScriptEnd::
	waitmessage
	closemessage
	release
	end


KaolMines_Trainer1::
	trainerbattle_single TRAINER_KM_TR1_PICNICKER, KaolMines_Text_Trainer1Intro, KaolMines_Text_Trainer1Defeat
	msgbox KaolMines_Text_Trainer1PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer2::
	trainerbattle_single TRAINER_KM_TR2_BLACKBELT, KaolMines_Text_Trainer2Intro, KaolMines_Text_Trainer2Defeat
	msgbox KaolMines_Text_Trainer2PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer3::
	trainerbattle_single TRAINER_KM_TR3_CAMPER, KaolMines_Text_Trainer3Intro, KaolMines_Text_Trainer3Defeat
	msgbox KaolMines_Text_Trainer3PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer4::
	trainerbattle_single TRAINER_KM_TR4_HIKER, KaolMines_Text_Trainer4Intro, KaolMines_Text_Trainer4Defeat
	msgbox KaolMines_Text_Trainer4PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer5::
	trainerbattle_single TRAINER_KM_TR5_HIKER, KaolMines_Text_Trainer5Intro, KaolMines_Text_Trainer5Defeat
	msgbox KaolMines_Text_Trainer5PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer6::
	trainerbattle_single TRAINER_KM_TR6_HIKER, KaolMines_Text_Trainer6Intro, KaolMines_Text_Trainer6Defeat
	msgbox KaolMines_Text_Trainer6PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer7::
	trainerbattle_single TRAINER_KM_TR7_CAMPER, KaolMines_Text_Trainer7Intro, KaolMines_Text_Trainer7Defeat
	msgbox KaolMines_Text_Trainer7PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer8::
	trainerbattle_single TRAINER_KM_TR8_PICNICKER, KaolMines_Text_Trainer8Intro, KaolMines_Text_Trainer8Defeat
	msgbox KaolMines_Text_Trainer8PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer9::
	trainerbattle_single TRAINER_KM_TR9_BLACKBELT, KaolMines_Text_Trainer9Intro, KaolMines_Text_Trainer9Defeat
	msgbox KaolMines_Text_Trainer9PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer10::
	trainerbattle_single TRAINER_KM_TR10_HIKER, KaolMines_Text_Trainer10Intro, KaolMines_Text_Trainer10Defeat
	msgbox KaolMines_Text_Trainer10PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Miner1_IfLost::
	.string "If you ever feel lost in the caves,\n"
	.string "don't forget to use your Escape Rope.$"

KaolMines_Miner1_NoRope::
	.string "These are the Kaolisle Mines.\p"
	.string "With the help of Pokémon, we mine for\n"
	.string "important minerals here.\p"
	.string "If you're a trainer looking to train,\n"
	.string "you should head to the lower floors.\l"
	.string "It's a bit dark in there but you should\l"
	.string "be able to meet other trainers there.\p"
	.string "If you do plan on heading deeper,\n"
	.string "I recommend you take this.$"

KaolMines_Miner1_YesRope::
	.string "These are the Kaolisle Mines.\p"
	.string "With the help of Pokémon, we mine for\n"
	.string "important minerals here.\p"
	.string "If you're a trainer looking to train,\n"
	.string "you should head to the lower floors.\l"
	.string "It's a bit dark in there but you should\l"
	.string "be able to meet other trainers there.\p"
	.string "If you ever feel lost in the caves,\n"
	.string "don't forget to use your Escape Rope.$"

KaolMines_Miner2_Text::
	.string "Back in the day we used machinery\n"
	.string "to mine, but then someone realized\l"
	.string "that Pokémon are cheaper, safer,\l"
	.string "and more environmentally friendly.\l"
	.string "And the Pokémon like doing it too!$"

KaolMines_Miner3_Text::
	.string "The stuff we dig up here is used for\n"
	.string "all sorts of different purposes.\p"
	.string "The gravel and stone are used in\n"
	.string "construction while the minerals\l"
	.string "are used in medicine, electronics,\l"
	.string "practically everything!$"

KaolMines_Text_Trainer1Intro::
	.string "You never know what might come\n"
	.string "charging from the darkness.\l"
	.string "This time it's a trainer battle!$"

KaolMines_Text_Trainer1Defeat::
	.string "I only lost because I couldn't see!$"

KaolMines_Text_Trainer1PostBattle::
	.string "These caves are incredibly dark.\p"
	.string "I hope you brought a flashlight or\n"
	.string "have a Pokémon that knows Flash.$"

KaolMines_Text_Trainer2Intro::
	.string "My Pokémon and I have been here\n"
	.string "breaking rocks for days.\p"
	.string "Let me show you the result\n"
	.string "of our training!$"

KaolMines_Text_Trainer2Defeat::
	.string "Not enough training…$"

KaolMines_Text_Trainer2PostBattle::
	.string "Sometimes a wild Pokémon may appear\n"
	.string "when breaking rocks.\p"
	.string "All the more training experience,\n"
	.string "I say!$"

KaolMines_Text_Trainer3Intro::
	.string "Ah, a fresh face! Let's have a duel!$"

KaolMines_Text_Trainer3Defeat::
	.string "Maybe I should pick my fights\n"
	.string "more carefully…$"

KaolMines_Text_Trainer3PostBattle::
	.string "I've noticed a few items lying around\n"
	.string "in these caves.\p"
	.string "Are people dropping them accidentally\n"
	.string "or is there somebody who's leaving them\l"
	.string "here on purpose?$"

KaolMines_Text_Trainer4Intro::
	.string "My will is iron!\n"
	.string "My conviction, steel!$"

KaolMines_Text_Trainer4Defeat::
	.string "My skills, inadequate…$"

KaolMines_Text_Trainer4PostBattle::
	.string "Your skills, pure titanium!$"

KaolMines_Text_Trainer5Intro::
	.string "This is hikers' turf!\p"
	.string "You must be looking for a battle\n"
	.string "to tread here so brazenly!$"

KaolMines_Text_Trainer5Defeat::
	.string "I was just kidding! I yield!$"

KaolMines_Text_Trainer5PostBattle::
	.string "We hikers love delving into caves.\p"
	.string "It's almost as if something calls to\n"
	.string "us from beneath the earth's surface.$"

KaolMines_Text_Trainer6Intro::
	.string "You've come surprisingly far!\n"
	.string "You must be a strong trainer!$"

KaolMines_Text_Trainer6Defeat::
	.string "Too strong for me!$"

KaolMines_Text_Trainer6PostBattle::
	.string "These caves seem to diverge in to\n"
	.string "multiple directions.\l"
	.string "Try not to get lost!$"

KaolMines_Text_Trainer7Intro::
	.string "My Pokémon have no weaknesses.\n"
	.string "Observe!$"

KaolMines_Text_Trainer7Defeat::
	.string "This isn't possible!$"

KaolMines_Text_Trainer7PostBattle::
	.string "I thought a Pokémon without weaknesses\n"
	.string "would be undefeatable.\p"
	.string "Guess there's more to Pokémon battles\n"
	.string "than type advantage.$"

KaolMines_Text_Trainer8Intro::
	.string "I was just about to Escape Rope out\n"
	.string "of here but then I spotted you.\l"
	.string "Can't let a trainer battle slip by!$"

KaolMines_Text_Trainer8Defeat::
	.string "Guess I should've escaped instead…$"

KaolMines_Text_Trainer8PostBattle::
	.string "These caves are so dark that I\n"
	.string "honestly have no idea where I'm going.\p"
	.string "Maybe I should go back the way I came\n"
	.string "and forget exploring this place…$"

KaolMines_Text_Trainer9Intro::
	.string "I am the master of my art!$"

KaolMines_Text_Trainer9Defeat::
	.string "Astounding…!$"

KaolMines_Text_Trainer9PostBattle::
	.string "You show great potential.\n"
	.string "Have you considered picking up karate?$"

KaolMines_Text_Trainer10Intro::
	.string "It's taken a long time for me to\n"
	.string "delve this far.\p"
	.string "Any treasures that lie ahead\n"
	.string "belong to me!$"

KaolMines_Text_Trainer10Defeat::
	.string "You win. I forfeit!$"

KaolMines_Text_Trainer10PostBattle::
	.string "Now that I think about it, many people\n"
	.string "visit these mines on a daily basis.\l"
	.string "Why would there be any treasures here?$"
