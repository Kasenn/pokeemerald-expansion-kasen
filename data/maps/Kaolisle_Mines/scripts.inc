Kaolisle_Mines_MapScripts::
# 2 "data/maps/Kaolisle_Mines/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KaolisleEscape
	.byte 0


KaolisleEscape::
# 6 "data/maps/Kaolisle_Mines/scripts.pory"
	setescapewarp MAP_KAOLISLE_CITY, 28, 33
	return


KaolMines_Miner1::
# 10 "data/maps/Kaolisle_Mines/scripts.pory"
	checkitem ITEM_ESCAPE_ROPE
# 11 "data/maps/Kaolisle_Mines/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KaolMines_Miner1_2
# 19 "data/maps/Kaolisle_Mines/scripts.pory"
	msgbox KaolMines_Miner1_YesRope, MSGBOX_NPC
	end

KaolMines_Miner1_2:
# 12 "data/maps/Kaolisle_Mines/scripts.pory"
	lock
# 13 "data/maps/Kaolisle_Mines/scripts.pory"
	faceplayer
# 14 "data/maps/Kaolisle_Mines/scripts.pory"
	msgbox KaolMines_Miner1_NoRope, MSGBOX_DEFAULT
# 15 "data/maps/Kaolisle_Mines/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 16 "data/maps/Kaolisle_Mines/scripts.pory"
	msgbox KaolMines_Miner1_IfLost, MSGBOX_NPC
	end


KaolMines_Miner2::
# 49 "data/maps/Kaolisle_Mines/scripts.pory"
	msgbox KaolMines_Miner2_Text, MSGBOX_NPC
	end


KaolMines_Miner3::
# 60 "data/maps/Kaolisle_Mines/scripts.pory"
	msgbox KaolMines_Miner3_Text, MSGBOX_NPC
	end


KaolMines_Excadrill1::
# 72 "data/maps/Kaolisle_Mines/scripts.pory"
	call KaolMines_Excadrill
# 73 "data/maps/Kaolisle_Mines/scripts.pory"
	turnobject 13, DIR_WEST
	end


KaolMines_Excadrill2::
# 77 "data/maps/Kaolisle_Mines/scripts.pory"
	call KaolMines_Excadrill
# 78 "data/maps/Kaolisle_Mines/scripts.pory"
	turnobject 15, DIR_SOUTH
	end


KaolMines_Excadrill3::
# 82 "data/maps/Kaolisle_Mines/scripts.pory"
	call KaolMines_Excadrill
# 83 "data/maps/Kaolisle_Mines/scripts.pory"
	turnobject 11, DIR_NORTH
	end


KaolMines_Excadrill4::
# 87 "data/maps/Kaolisle_Mines/scripts.pory"
	call KaolMines_Excadrill
# 88 "data/maps/Kaolisle_Mines/scripts.pory"
	turnobject 14, DIR_EAST
	end


KaolMines_Excadrill::
# 93 "data/maps/Kaolisle_Mines/scripts.pory"
	lock
# 94 "data/maps/Kaolisle_Mines/scripts.pory"
	faceplayer
# 95 "data/maps/Kaolisle_Mines/scripts.pory"
	waitse
# 96 "data/maps/Kaolisle_Mines/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_NORMAL
# 97 "data/maps/Kaolisle_Mines/scripts.pory"
	waitmoncry
# 98 "data/maps/Kaolisle_Mines/scripts.pory"
	release
	return


FindItem_Fossil::
# 102 "data/maps/Kaolisle_Mines/scripts.pory"
	random 11
# 103 "data/maps/Kaolisle_Mines/scripts.pory"
	switch VAR_RESULT
# 104 "data/maps/Kaolisle_Mines/scripts.pory"
	case 0, FindItem_Fossil_2
# 106 "data/maps/Kaolisle_Mines/scripts.pory"
	case 1, FindItem_Fossil_3
# 108 "data/maps/Kaolisle_Mines/scripts.pory"
	case 2, FindItem_Fossil_4
# 110 "data/maps/Kaolisle_Mines/scripts.pory"
	case 3, FindItem_Fossil_5
# 112 "data/maps/Kaolisle_Mines/scripts.pory"
	case 4, FindItem_Fossil_6
# 114 "data/maps/Kaolisle_Mines/scripts.pory"
	case 5, FindItem_Fossil_7
# 116 "data/maps/Kaolisle_Mines/scripts.pory"
	case 6, FindItem_Fossil_8
# 118 "data/maps/Kaolisle_Mines/scripts.pory"
	case 7, FindItem_Fossil_9
# 120 "data/maps/Kaolisle_Mines/scripts.pory"
	case 8, FindItem_Fossil_10
# 122 "data/maps/Kaolisle_Mines/scripts.pory"
	case 9, FindItem_Fossil_11
# 124 "data/maps/Kaolisle_Mines/scripts.pory"
	case 10, FindItem_Fossil_12
	return

FindItem_Fossil_2:
# 105 "data/maps/Kaolisle_Mines/scripts.pory"
	goto LootHelixGlobal
	return

FindItem_Fossil_3:
# 107 "data/maps/Kaolisle_Mines/scripts.pory"
	goto LootDomeGlobal
	return

FindItem_Fossil_4:
# 109 "data/maps/Kaolisle_Mines/scripts.pory"
	goto LootOldAmberGlobal
	return

FindItem_Fossil_5:
# 111 "data/maps/Kaolisle_Mines/scripts.pory"
	goto LootRootGlobal
	return

FindItem_Fossil_6:
# 113 "data/maps/Kaolisle_Mines/scripts.pory"
	goto LootClawGlobal
	return

FindItem_Fossil_7:
# 115 "data/maps/Kaolisle_Mines/scripts.pory"
	goto LootSkullGlobal
	return

FindItem_Fossil_8:
# 117 "data/maps/Kaolisle_Mines/scripts.pory"
	goto LootArmorGlobal
	return

FindItem_Fossil_9:
# 119 "data/maps/Kaolisle_Mines/scripts.pory"
	goto LootCoverGlobal
	return

FindItem_Fossil_10:
# 121 "data/maps/Kaolisle_Mines/scripts.pory"
	goto LootPlumeGlobal
	return

FindItem_Fossil_11:
# 123 "data/maps/Kaolisle_Mines/scripts.pory"
	goto LootJawGlobal
	return

FindItem_Fossil_12:
# 125 "data/maps/Kaolisle_Mines/scripts.pory"
	goto LootSailGlobal
	return


LootHelixGlobal::
# 130 "data/maps/Kaolisle_Mines/scripts.pory"
	goto_if_set FLAG_OBTAINED_HELIX_FOSSIL, LootHelixGlobal_2
LootHelixGlobal_1:
# 133 "data/maps/Kaolisle_Mines/scripts.pory"
	finditem ITEM_HELIX_FOSSIL
# 134 "data/maps/Kaolisle_Mines/scripts.pory"
	setflag FLAG_OBTAINED_HELIX_FOSSIL
# 135 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FossilScriptEnd
	return

LootHelixGlobal_2:
# 131 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FindItem_Fossil
	goto LootHelixGlobal_1


LootDomeGlobal::
# 138 "data/maps/Kaolisle_Mines/scripts.pory"
	goto_if_set FLAG_OBTAINED_DOME_FOSSIL, LootDomeGlobal_2
LootDomeGlobal_1:
# 141 "data/maps/Kaolisle_Mines/scripts.pory"
	finditem ITEM_DOME_FOSSIL
# 142 "data/maps/Kaolisle_Mines/scripts.pory"
	setflag FLAG_OBTAINED_DOME_FOSSIL
# 143 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FossilScriptEnd
	return

LootDomeGlobal_2:
# 139 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FindItem_Fossil
	goto LootDomeGlobal_1


LootOldAmberGlobal::
# 146 "data/maps/Kaolisle_Mines/scripts.pory"
	goto_if_set FLAG_OBTAINED_OLDAMBER_FOSSIL, LootOldAmberGlobal_2
LootOldAmberGlobal_1:
# 149 "data/maps/Kaolisle_Mines/scripts.pory"
	finditem ITEM_OLD_AMBER
# 150 "data/maps/Kaolisle_Mines/scripts.pory"
	setflag FLAG_OBTAINED_OLDAMBER_FOSSIL
# 151 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FossilScriptEnd
	return

LootOldAmberGlobal_2:
# 147 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FindItem_Fossil
	goto LootOldAmberGlobal_1


LootRootGlobal::
# 154 "data/maps/Kaolisle_Mines/scripts.pory"
	goto_if_set FLAG_OBTAINED_ROOT_FOSSIL, LootRootGlobal_2
LootRootGlobal_1:
# 157 "data/maps/Kaolisle_Mines/scripts.pory"
	finditem ITEM_ROOT_FOSSIL
# 158 "data/maps/Kaolisle_Mines/scripts.pory"
	setflag FLAG_OBTAINED_ROOT_FOSSIL
# 159 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FossilScriptEnd
	return

LootRootGlobal_2:
# 155 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FindItem_Fossil
	goto LootRootGlobal_1


LootClawGlobal::
# 162 "data/maps/Kaolisle_Mines/scripts.pory"
	goto_if_set FLAG_OBTAINED_CLAW_FOSSIL, LootClawGlobal_2
LootClawGlobal_1:
# 165 "data/maps/Kaolisle_Mines/scripts.pory"
	finditem ITEM_CLAW_FOSSIL
# 166 "data/maps/Kaolisle_Mines/scripts.pory"
	setflag FLAG_OBTAINED_CLAW_FOSSIL
# 167 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FossilScriptEnd
	return

LootClawGlobal_2:
# 163 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FindItem_Fossil
	goto LootClawGlobal_1


LootSkullGlobal::
# 170 "data/maps/Kaolisle_Mines/scripts.pory"
	goto_if_set FLAG_OBTAINED_SKULL_FOSSIL, LootSkullGlobal_2
LootSkullGlobal_1:
# 173 "data/maps/Kaolisle_Mines/scripts.pory"
	finditem ITEM_SKULL_FOSSIL
# 174 "data/maps/Kaolisle_Mines/scripts.pory"
	setflag FLAG_OBTAINED_SKULL_FOSSIL
# 175 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FossilScriptEnd
	return

LootSkullGlobal_2:
# 171 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FindItem_Fossil
	goto LootSkullGlobal_1


LootArmorGlobal::
# 178 "data/maps/Kaolisle_Mines/scripts.pory"
	goto_if_set FLAG_OBTAINED_ARMOR_FOSSIL, LootArmorGlobal_2
LootArmorGlobal_1:
# 181 "data/maps/Kaolisle_Mines/scripts.pory"
	finditem ITEM_ARMOR_FOSSIL
# 182 "data/maps/Kaolisle_Mines/scripts.pory"
	setflag FLAG_OBTAINED_ARMOR_FOSSIL
# 183 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FossilScriptEnd
	return

LootArmorGlobal_2:
# 179 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FindItem_Fossil
	goto LootArmorGlobal_1


LootCoverGlobal::
# 186 "data/maps/Kaolisle_Mines/scripts.pory"
	goto_if_set FLAG_OBTAINED_COVER_FOSSIL, LootCoverGlobal_2
LootCoverGlobal_1:
# 189 "data/maps/Kaolisle_Mines/scripts.pory"
	finditem ITEM_COVER_FOSSIL
# 190 "data/maps/Kaolisle_Mines/scripts.pory"
	setflag FLAG_OBTAINED_COVER_FOSSIL
# 191 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FossilScriptEnd
	return

LootCoverGlobal_2:
# 187 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FindItem_Fossil
	goto LootCoverGlobal_1


LootPlumeGlobal::
# 194 "data/maps/Kaolisle_Mines/scripts.pory"
	goto_if_set FLAG_OBTAINED_PLUME_FOSSIL, LootPlumeGlobal_2
LootPlumeGlobal_1:
# 197 "data/maps/Kaolisle_Mines/scripts.pory"
	finditem ITEM_PLUME_FOSSIL
# 198 "data/maps/Kaolisle_Mines/scripts.pory"
	setflag FLAG_OBTAINED_PLUME_FOSSIL
# 199 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FossilScriptEnd
	return

LootPlumeGlobal_2:
# 195 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FindItem_Fossil
	goto LootPlumeGlobal_1


LootJawGlobal::
# 202 "data/maps/Kaolisle_Mines/scripts.pory"
	goto_if_set FLAG_OBTAINED_JAW_FOSSIL, LootJawGlobal_2
LootJawGlobal_1:
# 205 "data/maps/Kaolisle_Mines/scripts.pory"
	finditem ITEM_JAW_FOSSIL
# 206 "data/maps/Kaolisle_Mines/scripts.pory"
	setflag FLAG_OBTAINED_JAW_FOSSIL
# 207 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FossilScriptEnd
	return

LootJawGlobal_2:
# 203 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FindItem_Fossil
	goto LootJawGlobal_1


LootSailGlobal::
# 210 "data/maps/Kaolisle_Mines/scripts.pory"
	goto_if_set FLAG_OBTAINED_SAIL_FOSSIL, LootSailGlobal_2
LootSailGlobal_1:
# 213 "data/maps/Kaolisle_Mines/scripts.pory"
	finditem ITEM_SAIL_FOSSIL
# 214 "data/maps/Kaolisle_Mines/scripts.pory"
	setflag FLAG_OBTAINED_SAIL_FOSSIL
# 215 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FossilScriptEnd
	return

LootSailGlobal_2:
# 211 "data/maps/Kaolisle_Mines/scripts.pory"
	goto FindItem_Fossil
	goto LootSailGlobal_1


FossilScriptEnd::
# 219 "data/maps/Kaolisle_Mines/scripts.pory"
	waitmessage
# 220 "data/maps/Kaolisle_Mines/scripts.pory"
	release
	end


KaolMines_Trainer1::
# 225 "data/maps/Kaolisle_Mines/scripts.pory"
	trainerbattle_single TRAINER_KM_TR1_PICNICKER, KaolMines_Text_Trainer1Intro, KaolMines_Text_Trainer1Defeat
# 226 "data/maps/Kaolisle_Mines/scripts.pory"
	msgbox KaolMines_Text_Trainer1PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer2::
# 244 "data/maps/Kaolisle_Mines/scripts.pory"
	trainerbattle_single TRAINER_KM_TR2_BLACKBELT, KaolMines_Text_Trainer2Intro, KaolMines_Text_Trainer2Defeat
# 245 "data/maps/Kaolisle_Mines/scripts.pory"
	msgbox KaolMines_Text_Trainer2PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer3::
# 265 "data/maps/Kaolisle_Mines/scripts.pory"
	trainerbattle_single TRAINER_KM_TR3_CAMPER, KaolMines_Text_Trainer3Intro, KaolMines_Text_Trainer3Defeat
# 266 "data/maps/Kaolisle_Mines/scripts.pory"
	msgbox KaolMines_Text_Trainer3PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer4::
# 285 "data/maps/Kaolisle_Mines/scripts.pory"
	trainerbattle_single TRAINER_KM_TR4_HIKER, KaolMines_Text_Trainer4Intro, KaolMines_Text_Trainer4Defeat
# 286 "data/maps/Kaolisle_Mines/scripts.pory"
	msgbox KaolMines_Text_Trainer4PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer5::
# 301 "data/maps/Kaolisle_Mines/scripts.pory"
	trainerbattle_single TRAINER_KM_TR5_HIKER, KaolMines_Text_Trainer5Intro, KaolMines_Text_Trainer5Defeat
# 302 "data/maps/Kaolisle_Mines/scripts.pory"
	msgbox KaolMines_Text_Trainer5PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer6::
# 320 "data/maps/Kaolisle_Mines/scripts.pory"
	trainerbattle_single TRAINER_KM_TR6_HIKER, KaolMines_Text_Trainer6Intro, KaolMines_Text_Trainer6Defeat
# 321 "data/maps/Kaolisle_Mines/scripts.pory"
	msgbox KaolMines_Text_Trainer6PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer7::
# 338 "data/maps/Kaolisle_Mines/scripts.pory"
	trainerbattle_single TRAINER_KM_TR7_CAMPER, KaolMines_Text_Trainer7Intro, KaolMines_Text_Trainer7Defeat
# 339 "data/maps/Kaolisle_Mines/scripts.pory"
	msgbox KaolMines_Text_Trainer7PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer8::
# 357 "data/maps/Kaolisle_Mines/scripts.pory"
	trainerbattle_single TRAINER_KM_TR8_PICNICKER, KaolMines_Text_Trainer8Intro, KaolMines_Text_Trainer8Defeat
# 358 "data/maps/Kaolisle_Mines/scripts.pory"
	msgbox KaolMines_Text_Trainer8PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer9::
# 377 "data/maps/Kaolisle_Mines/scripts.pory"
	trainerbattle_single TRAINER_KM_TR9_BLACKBELT, KaolMines_Text_Trainer9Intro, KaolMines_Text_Trainer9Defeat
# 378 "data/maps/Kaolisle_Mines/scripts.pory"
	msgbox KaolMines_Text_Trainer9PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Trainer10::
# 393 "data/maps/Kaolisle_Mines/scripts.pory"
	trainerbattle_single TRAINER_KM_TR10_HIKER, KaolMines_Text_Trainer10Intro, KaolMines_Text_Trainer10Defeat
# 394 "data/maps/Kaolisle_Mines/scripts.pory"
	msgbox KaolMines_Text_Trainer10PostBattle, MSGBOX_AUTOCLOSE
	end


KaolMines_Miner1_IfLost::
# 22 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "If you ever feel lost in the caves,\n"
	.string "don't forget to use your Escape Rope.$"

KaolMines_Miner1_NoRope::
# 26 "data/maps/Kaolisle_Mines/scripts.pory"
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
# 37 "data/maps/Kaolisle_Mines/scripts.pory"
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
# 52 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "Back in the day we used machinery\n"
	.string "to mine, but then someone realized\l"
	.string "that Pokémon are cheaper, safer,\l"
	.string "and more environmentally friendly.\l"
	.string "And the Pokémon like doing it too!$"

KaolMines_Miner3_Text::
# 63 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "The stuff we dig up here is used for\n"
	.string "all sorts of different purposes.\p"
	.string "The gravel and stone are used in\n"
	.string "construction while the minerals\l"
	.string "are used in medicine, electronics,\l"
	.string "practically everything!$"

KaolMines_Text_Trainer1Intro::
# 229 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "You never know what might come\n"
	.string "charging from the darkness.\l"
	.string "This time it's a trainer battle!$"

KaolMines_Text_Trainer1Defeat::
# 234 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "I only lost because I couldn't see!$"

KaolMines_Text_Trainer1PostBattle::
# 237 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "These caves are incredibly dark.\p"
	.string "I hope you brought a flashlight or\n"
	.string "have a Pokémon that knows Flash.$"

KaolMines_Text_Trainer2Intro::
# 248 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "My Pokémon and I have been here\n"
	.string "breaking rocks for days.\p"
	.string "Let me show you the result\n"
	.string "of our training!$"

KaolMines_Text_Trainer2Defeat::
# 254 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "Not enough training…$"

KaolMines_Text_Trainer2PostBattle::
# 257 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "Sometimes a wild Pokémon may appear\n"
	.string "when breaking rocks.\p"
	.string "All the more training experience,\n"
	.string "I say!$"

KaolMines_Text_Trainer3Intro::
# 269 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "Ah, a fresh face! Let's have a duel!$"

KaolMines_Text_Trainer3Defeat::
# 272 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "Maybe I should pick my fights\n"
	.string "more carefully…$"

KaolMines_Text_Trainer3PostBattle::
# 276 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "I've noticed a few items lying around\n"
	.string "in these caves.\p"
	.string "Are people dropping them accidentally\n"
	.string "or is there somebody who's leaving them\l"
	.string "here on purpose?$"

KaolMines_Text_Trainer4Intro::
# 289 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "My will is iron!\n"
	.string "My conviction, steel!$"

KaolMines_Text_Trainer4Defeat::
# 293 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "My skills, inadequate…$"

KaolMines_Text_Trainer4PostBattle::
# 296 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "Your skills, pure titanium!$"

KaolMines_Text_Trainer5Intro::
# 305 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "This is hikers' turf!\p"
	.string "You must be looking for a battle\n"
	.string "to tread here so brazenly!$"

KaolMines_Text_Trainer5Defeat::
# 310 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "I was just kidding! I yield!$"

KaolMines_Text_Trainer5PostBattle::
# 313 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "We hikers love delving into caves.\p"
	.string "It's almost as if something calls to\n"
	.string "us from beneath the earth's surface.$"

KaolMines_Text_Trainer6Intro::
# 324 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "You've come surprisingly far!\n"
	.string "You must be a strong trainer!$"

KaolMines_Text_Trainer6Defeat::
# 328 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "Too strong for me!$"

KaolMines_Text_Trainer6PostBattle::
# 331 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "These caves seem to diverge in to\n"
	.string "multiple directions.\l"
	.string "Try not to get lost!$"

KaolMines_Text_Trainer7Intro::
# 342 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "My Pokémon have no weaknesses.\n"
	.string "Observe!$"

KaolMines_Text_Trainer7Defeat::
# 346 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "This isn't possible!$"

KaolMines_Text_Trainer7PostBattle::
# 349 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "I thought a Pokémon without weaknesses\n"
	.string "would be undefeatable.\p"
	.string "Guess there's more to Pokémon battles\n"
	.string "than type advantage.$"

KaolMines_Text_Trainer8Intro::
# 361 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "I was just about to Escape Rope out\n"
	.string "of here but then I spotted you.\l"
	.string "Can't let a trainer battle slip by!$"

KaolMines_Text_Trainer8Defeat::
# 366 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "Guess I should've escaped instead…$"

KaolMines_Text_Trainer8PostBattle::
# 369 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "These caves are so dark that I\n"
	.string "honestly have no idea where I'm going.\p"
	.string "Maybe I should go back the way I came\n"
	.string "and forget exploring this place…$"

KaolMines_Text_Trainer9Intro::
# 381 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "I am the master of my art!$"

KaolMines_Text_Trainer9Defeat::
# 384 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "Astounding…!$"

KaolMines_Text_Trainer9PostBattle::
# 387 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "You show great potential.\n"
	.string "Have you considered picking up karate?$"

KaolMines_Text_Trainer10Intro::
# 397 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "It's taken a long time for me to\n"
	.string "delve this far.\p"
	.string "Any treasures that lie ahead\n"
	.string "belong to me!$"

KaolMines_Text_Trainer10Defeat::
# 403 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "You win. I forfeit!$"

KaolMines_Text_Trainer10PostBattle::
# 406 "data/maps/Kaolisle_Mines/scripts.pory"
	.string "Now that I think about it, many people\n"
	.string "visit these mines on a daily basis.\l"
	.string "Why would there be any treasures here?$"
