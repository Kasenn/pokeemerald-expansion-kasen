FishingVillage_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FishingVillage_DespawnBrother
	.byte 0


FishingVillage_DespawnBrother::
	setflag FLAG_VISITED_FISHING_VILLAGE
	checktrainerflag TRAINER_BROTHER5_ROWLET
	goto_if 1, FishingVillage_DespawnBrother_1
	checktrainerflag TRAINER_BROTHER5_TORCHIC
	goto_if 1, FishingVillage_DespawnBrother_1
	checktrainerflag TRAINER_BROTHER5_PIPLUP
	goto_if 1, FishingVillage_DespawnBrother_1
	return

FishingVillage_DespawnBrother_1:
	setflag FLAG_TEMP_1
	setvar VAR_TEMP_1, 1
	return


FishVillage_Brother1::
	setvar VAR_TEMP_2, 1
	goto FishVillage_Brother
	return


FishVillage_Brother2::
	setvar VAR_TEMP_2, 2
	goto FishVillage_Brother
	return


FishVillage_Brother3::
	setvar VAR_TEMP_2, 3
	goto FishVillage_Brother
	return


FishVillage_Brother::
	lock
	turnobject 1, DIR_SOUTH
	playse SE_PIN
	applymovement 1, ExclamationMark
	waitmovement 0
	delay 48
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	switch VAR_TEMP_2
	case 1, FishVillage_Brother_3
	case 2, FishVillage_Brother_4
	case 3, FishVillage_Brother_5
FishVillage_Brother_1:
	waitmovement 0
	goto_if_set FLAG_KAOLISLE_BROTHER_INTRO, FishVillage_Brother_7
FishVillage_Brother_6:
	checktrainerflag TRAINER_BROTHER2_ROWLET
	goto_if 1, FishVillage_Brother_10
	checktrainerflag TRAINER_BROTHER3_ROWLET
	goto_if 1, FishVillage_Brother_10
	checktrainerflag TRAINER_BROTHER4_ROWLET
	goto_if 1, FishVillage_Brother_10
	checktrainerflag TRAINER_BROTHER2_TORCHIC
	goto_if 1, FishVillage_Brother_10
	checktrainerflag TRAINER_BROTHER3_TORCHIC
	goto_if 1, FishVillage_Brother_10
	checktrainerflag TRAINER_BROTHER4_TORCHIC
	goto_if 1, FishVillage_Brother_10
	checktrainerflag TRAINER_BROTHER2_PIPLUP
	goto_if 1, FishVillage_Brother_10
	checktrainerflag TRAINER_BROTHER3_PIPLUP
	goto_if 1, FishVillage_Brother_10
	checktrainerflag TRAINER_BROTHER4_PIPLUP
	goto_if 1, FishVillage_Brother_10
FishVillage_Brother_9:
	switch VAR_TEMP_3
	case 0, FishVillage_Brother_30
	case 1, FishVillage_Brother_31
	case 2, FishVillage_Brother_32
	case 3, FishVillage_Brother_33
FishVillage_Brother_28:
	checktrainerflag TRAINER_BROTHER2_ROWLET
	goto_if 1, FishVillage_Brother_35
	checktrainerflag TRAINER_BROTHER3_ROWLET
	goto_if 1, FishVillage_Brother_35
	checktrainerflag TRAINER_BROTHER4_ROWLET
	goto_if 1, FishVillage_Brother_35
	checktrainerflag TRAINER_BROTHER2_TORCHIC
	goto_if 1, FishVillage_Brother_35
	checktrainerflag TRAINER_BROTHER3_TORCHIC
	goto_if 1, FishVillage_Brother_35
	checktrainerflag TRAINER_BROTHER4_TORCHIC
	goto_if 1, FishVillage_Brother_35
	checktrainerflag TRAINER_BROTHER2_PIPLUP
	goto_if 1, FishVillage_Brother_35
	checktrainerflag TRAINER_BROTHER3_PIPLUP
	goto_if 1, FishVillage_Brother_35
	checktrainerflag TRAINER_BROTHER4_PIPLUP
	goto_if 1, FishVillage_Brother_35
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq FishVillage_Brother_62
	switch VAR_STARTER_MON
	case 0, FishVillage_Brother_75
	case 1, FishVillage_Brother_76
	case 2, FishVillage_Brother_77
FishVillage_Brother_34:
	goto_if_set FLAG_TEMP_A, FishVillage_Brother_55
	msgbox FishingVillageBrotherLeaves
FishVillage_Brother_54:
	closemessage
	switch VAR_TEMP_2
	case 1, FishVillage_Brother_67
	case 2, FishVillage_Brother_68
	case 3, FishVillage_Brother_69
FishVillage_Brother_65:
	waitmovement 1
	removeobject 1
	setvar VAR_TEMP_1, 1
	delay 45
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	return

FishVillage_Brother_3:
	applymovement 1, MoveFishBrother1
	goto FishVillage_Brother_1

FishVillage_Brother_4:
	applymovement 1, Walk2Down
	goto FishVillage_Brother_1

FishVillage_Brother_5:
	applymovement 1, MoveFishBrother3
	goto FishVillage_Brother_1

FishVillage_Brother_7:
	addvar VAR_TEMP_3, 1
	goto FishVillage_Brother_6

FishVillage_Brother_10:
	addvar VAR_TEMP_3, 2
	goto FishVillage_Brother_9

FishVillage_Brother_30:
	msgbox LastMetInPearlwood
	goto FishVillage_Brother_28

FishVillage_Brother_31:
	msgbox LastMetInKaolisleNoFight
	goto FishVillage_Brother_28

FishVillage_Brother_32:
	msgbox LastMetInRoute28
	goto FishVillage_Brother_28

FishVillage_Brother_33:
	msgbox LastMetInKaolisleHaveFought
	goto FishVillage_Brother_28

FishVillage_Brother_35:
	switch VAR_STARTER_MON
	case 0, FishVillage_Brother_59
	case 1, FishVillage_Brother_60
	case 2, FishVillage_Brother_61
	goto FishVillage_Brother_34

FishVillage_Brother_55:
	msgbox FishingVillageBrotherLeavesAfterMegaEvo
	goto FishVillage_Brother_54

FishVillage_Brother_59:
	trainerbattle_no_intro TRAINER_BROTHER5_ROWLET, FishingVillage_BrotherLost
	goto FishVillage_Brother_34

FishVillage_Brother_60:
	trainerbattle_no_intro TRAINER_BROTHER5_TORCHIC, FishingVillage_BrotherLost
	goto FishVillage_Brother_34

FishVillage_Brother_61:
	trainerbattle_no_intro TRAINER_BROTHER5_PIPLUP, FishingVillage_BrotherLost
	goto FishVillage_Brother_34

FishVillage_Brother_62:
	switch VAR_STARTER_MON
	case 0, FishVillage_Brother_71
	case 1, FishVillage_Brother_72
	case 2, FishVillage_Brother_73
	goto FishVillage_Brother_34

FishVillage_Brother_67:
	applymovement 1, LeaveFishBrotherRight
	applymovement OBJ_EVENT_ID_PLAYER, FishPlayerTurnRight
	goto FishVillage_Brother_65

FishVillage_Brother_68:
	applymovement 1, LeaveFishBrotherLeft
	applymovement OBJ_EVENT_ID_PLAYER, FishPlayerTurnLeft
	goto FishVillage_Brother_65

FishVillage_Brother_69:
	applymovement 1, LeaveFishBrotherLeft
	applymovement OBJ_EVENT_ID_PLAYER, FishPlayerTurnLeft
	goto FishVillage_Brother_65

FishVillage_Brother_71:
	trainerbattle_no_intro TRAINER_BROTHER5_ROWLET, FishingVillage_BrotherLostFirstTimeAgainstMale
	goto FishVillage_Brother_34

FishVillage_Brother_72:
	trainerbattle_no_intro TRAINER_BROTHER5_TORCHIC, FishingVillage_BrotherLostFirstTimeAgainstMale
	goto FishVillage_Brother_34

FishVillage_Brother_73:
	trainerbattle_no_intro TRAINER_BROTHER5_PIPLUP, FishingVillage_BrotherLostFirstTimeAgainstMale
	goto FishVillage_Brother_34

FishVillage_Brother_75:
	trainerbattle_no_intro TRAINER_BROTHER5_ROWLET, FishingVillage_BrotherLostFirstTime
	goto FishVillage_Brother_34

FishVillage_Brother_76:
	trainerbattle_no_intro TRAINER_BROTHER5_TORCHIC, FishingVillage_BrotherLostFirstTime
	goto FishVillage_Brother_34

FishVillage_Brother_77:
	trainerbattle_no_intro TRAINER_BROTHER5_PIPLUP, FishingVillage_BrotherLostFirstTime
	goto FishVillage_Brother_34


FishPlayerTurnRight:
	delay_16
	walk_in_place_fast_right
	delay_16
	delay_16
	walk_in_place_fast_down
	step_end

FishPlayerTurnLeft:
	delay_16
	walk_in_place_fast_left
	delay_16
	delay_16
	walk_in_place_fast_down
	step_end

LeaveFishBrotherRight:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

LeaveFishBrotherLeft:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

FishVillage_Sign1::
	msgbox FishVillage_Sign1_Text, MSGBOX_SIGN
	return


FishVillage_Sign2::
	msgbox FishVillage_Sign2_Text, MSGBOX_SIGN
	return


FishVillage_Sign3::
	msgbox FishVillage_Sign3_Text, MSGBOX_SIGN
	return


FishVillage_Woman2::
	msgbox FishVillage_Woman2_Text, MSGBOX_NPC
	return


FishVillage_Fisherman1::
	goto_if_set FLAG_RECEIVED_GYARADOSITE, FishVillage_Fisherman1_2
	goto_if_set FLAG_TEMP_3, FishVillage_Fisherman1_3
	msgbox FishVillage_Fisherman1_Text, MSGBOX_NPC
FishVillage_Fisherman1_1:
	turnobject 3, DIR_NORTH
	return

FishVillage_Fisherman1_2:
	msgbox StillCantBelieveIt, MSGBOX_NPC
	goto FishVillage_Fisherman1_1

FishVillage_Fisherman1_3:
	msgbox FishVillage_Fisherman1_Text2, MSGBOX_NPC
	goto FishVillage_Fisherman1_1


FishVillage_Fisherman2::
	msgbox FishVillage_Fisherman2_Text, MSGBOX_NPC
	turnobject 5, DIR_NORTH
	return


FishVillage_Man1::
	goto_if_set FLAG_TEMP_3, FishVillage_Man1_2
	msgbox FishVillage_Man1_Text, MSGBOX_NPC
	turnobject 6, DIR_NORTH
	return

FishVillage_Man1_2:
	lock
	faceplayer
	msgbox CaughtGyarados
	closemessage
	switch VAR_FACING
	case DIR_EAST, FishVillage_Man1_6
	case DIR_NORTH, FishVillage_Man1_6
	case DIR_WEST, FishVillage_Man1_7
FishVillage_Man1_4:
	waitmovement 0
	setflag FLAG_FISHINGVILLAGE_GYARADOS_REWARD
	removeobject 6
	release
	end

FishVillage_Man1_6:
	applymovement 6, MoveElderDirNorth
	goto FishVillage_Man1_4

FishVillage_Man1_7:
	applymovement 6, MoveElderDirWest
	goto FishVillage_Man1_4


FishVillage_Woman5::
	msgbox FishVillage_Woman5_Text, MSGBOX_NPC
	turnobject 4, DIR_NORTH
	return


MoveElderDirNorth:
	walk_right
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

MoveElderDirWest:
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

FishingVillage_OldWoman::
	msgbox FishingVillage_OldWoman_Text, MSGBOX_NPC
	return


ExclamationMark:
	emote_exclamation_mark
	step_end

MoveFishBrother1:
	walk_down
	walk_left
	walk_down
	step_end

MoveFishBrother3:
	walk_down
	walk_right
	walk_down
	step_end

FishingVillage_FishingGuru::
	lock
	faceplayer
	checkitem ITEM_SUPER_ROD
	compare VAR_RESULT, TRUE
	goto_if_eq FishingVillage_FishingGuru_2
	checkitem ITEM_TITANIUM_LINE
	compare VAR_RESULT, TRUE
	goto_if_eq FishingVillage_FishingGuru_5
FishingVillage_FishingGuru_4:
	msgbox ImFishingGuru, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq FishingVillage_FishingGuru_8
	checkitem ITEM_OLD_ROD
	compare VAR_RESULT, FALSE
	goto_if_eq FishingVillage_FishingGuru_11
FishingVillage_FishingGuru_10:
	msgbox FisherOfSomeRenown
	giveitem ITEM_TITANIUM_LINE
	msgbox FishInLava
	release
	return

FishingVillage_FishingGuru_2:
	msgbox EnjoySuperRod, MSGBOX_NPC
	end

FishingVillage_FishingGuru_5:
	goto SuperRodQuestStarted
	goto FishingVillage_FishingGuru_4

FishingVillage_FishingGuru_8:
	msgbox GuruHonest, MSGBOX_NPC
	end

FishingVillage_FishingGuru_11:
	checkitem ITEM_GOOD_ROD
	compare VAR_RESULT, FALSE
	goto_if_eq FishingVillage_FishingGuru_13
	goto FishingVillage_FishingGuru_10

FishingVillage_FishingGuru_13:
	msgbox NoFishingRod, MSGBOX_NPC
	end


SuperRodQuestStarted::
	checkpartymon SPECIES_SLUGMA, 0
	compare VAR_RESULT, TRUE
	goto_if_eq SuperRodQuestStarted_2
SuperRodQuestStarted_1:
	goto_if_set FLAG_TEMP_1, SuperRodQuestStarted_4
	msgbox FishInLava, MSGBOX_NPC
	return

SuperRodQuestStarted_2:
	goto SuperRodReward
	goto SuperRodQuestStarted_1

SuperRodQuestStarted_4:
	msgbox DontHaveSlugma, MSGBOX_NPC
	return


SuperRodReward::
	msgbox YouHaveSlugma
	giveitem ITEM_SUPER_ROD
	msgbox EnjoySuperRod, MSGBOX_NPC
	return


FishingVillageBrotherLeaves::
	.string "{BROTHER}: Okay, I must admit,\n"
	.string "that was pretty good.\p"
	.string "Looks like I have to take it up\n"
	.string "a notch the next time we meet.\p"
	.string "In fact, I recently heard about a way\n"
	.string "to elevate your Pokémon to a whole new\l"
	.string "level.\p"
	.string "I hope you keep up your training,\n"
	.string "because the next time we meet, it's\l"
	.string "going to be a whole another story.\p"
	.string "Later!$"

FishingVillageBrotherLeavesAfterMegaEvo::
	.string "{BROTHER}: No way did your Pokémon\n"
	.string "just Mega Evolve!\p"
	.string "Hmph, looks like I'm the one\n"
	.string "lagging behind here.\p"
	.string "Unfortunately for you, I too heard\n"
	.string "about Mega Evolution recently.\p"
	.string "I hope you keep training your Pokémon,\n"
	.string "because if you don't, there's no way\l"
	.string "you will have any chance against me\l"
	.string "after I get my Mega Ring!\p"
	.string "Later!$"

FishingVillage_BrotherLost::
	.string "I can't believe I lost yet again!\n"
	.string "What a terrible role model I am…$"

FishingVillage_BrotherLostFirstTimeAgainstMale::
	.string "I can't believe I actually lost\n"
	.string "against my little brother.\l"
	.string "What a terrible role model I am…$"

FishingVillage_BrotherLostFirstTime::
	.string "I can't believe I actually lost\n"
	.string "against my little sister.\l"
	.string "What a terrible role model I am…$"

LastMetInPearlwood::
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "Long time no see!\p"
	.string "How are your Pokémon doing?\n"
	.string "Last time we spoke was in I believe…\p"
	.string "Wait…\p"
	.string "Have we really not met once since we\n"
	.string "left Pearlwood? Man, that's crazy!\p"
	.string "Man, now I'm really curious to see\n"
	.string "how you've grown!\p"
	.string "Let's see if you've been training\n"
	.string "your Pokémon properly!$"

LastMetInKaolisleNoFight::
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "Long time no see!\p"
	.string "How are your Pokémon doing?\n"
	.string "Last time we spoke was in I believe…\p"
	.string "Oh yeah!\n"
	.string "We met in Kaolisle City, right?\p"
	.string "Now that I think about it, we only met\n"
	.string "there briefly, so I never got to see\l"
	.string "how much you've grown as a trainer.\p"
	.string "In that case, what better time to\n"
	.string "do it than now!\p"
	.string "Let's see what kind of crazy Pokémon\n"
	.string "you have caught!$"

LastMetInRoute28::
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "Long time no see!\p"
	.string "How are your Pokémon doing?\n"
	.string "Last time we met was in I believe…\p"
	.string "Oh yeah!\p"
	.string "We met at Route 28, right?\n"
	.string "The one north of Aldeleaf City!\p"
	.string "Man, it sure has been a while.\p"
	.string "You know, I remember being really\n"
	.string "impressed with your team back then.\p"
	.string "How about you let me have a look at\n"
	.string "your Pokémon once more?\p"
	.string "I hope you've kept up with your\n"
	.string "training regimen because I won't be\l"
	.string "holding back!$"

LastMetInKaolisleHaveFought::
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "Long time no see!\p"
	.string "How are your Pokémon doing?\n"
	.string "Last time we met was in I believe…\p"
	.string "Oh yeah!\n"
	.string "We met in Kaolisle City, right?\p"
	.string "I forgot to mention it back then,\n"
	.string "but I was actually quite impressed\l"
	.string "by your team back when we battled\l"
	.string "just north of Aldeleaf.\p"
	.string "I'd like to see if you've been keeping\n"
	.string "up with your training regimen.\p"
	.string "I hope you haven't been slacking off,\n"
	.string "because I won't be going easy on you!$"

CaughtGyarados::
	.string "Oh, I saw you reeling in that\n"
	.string "Gyarados.\p"
	.string "Seeing such an aspiring angler has\n"
	.string "unlocked a memory in my brain from\l"
	.string "long time ago.\p"
	.string "There's something I need to fetch\n"
	.string "from my house.\p"
	.string "I want you to come meet me there when\n"
	.string "you have the time.\p"
	.string "I live in the house on the western\n"
	.string "side of the village.$"

FishVillage_Sign1_Text::
	.string "Fishing Guru's House$"

FishVillage_Sign2_Text::
	.string "Rest House$"

FishVillage_Sign3_Text::
	.string "{UP_ARROW} Fishing Village\n"
	.string "{RIGHT_ARROW} Route 23\l"
	.string "{DOWN_ARROW} Route 15$"

FishVillage_Woman2_Text::
	.string "The Fishing Village is a small\n"
	.string "community that attracts people from\l"
	.string "around the world.\p"
	.string "You wouldn't believe the things some\n"
	.string "people are able to fish up!$"

FishVillage_Fisherman1_Text::
	.string "I've heard some people say they've\n"
	.string "managed to fish up even Gyarados here!\p"
	.string "If you ask me, I say all those\n"
	.string "people are liars.$"

FishVillage_Fisherman1_Text2::
	.string "No way did you fish up a Gyarados!\p"
	.string "You should let the eldest in the\n"
	.string "village know.\p"
	.string "He's right over there, on the\n"
	.string "middle pier.$"

StillCantBelieveIt::
	.string "Had I not seen you reel that Gyarados\n"
	.string "with my own eyes, I would probably\l"
	.string "still believe it all to be a big lie.$"

FishVillage_Fisherman2_Text::
	.string "Some think fishing is boring.\n"
	.string "I could not disagree more.$"

FishVillage_Man1_Text::
	.string "I believe there is something in these\n"
	.string "waters, something no man has witnessed\l"
	.string "in ages.\p"
	.string "I plan to find what that is.$"

FishVillage_Woman5_Text::
	.string "Can't a girl fish in peace?$"

FishingVillage_OldWoman_Text::
	.string "There's not a whole lot going around\n"
	.string "in these parts of the region.\p"
	.string "There's no boat connection to the\n"
	.string "north and from what I've heard,\l"
	.string "Drisledge Town to the east is\l"
	.string "practically a ghost town.$"

ImFishingGuru::
	.string "People call me the Fishing Guru.\p"
	.string "Let me guess, you are interested in\n"
	.string "one of my fishing rods?$"

GuruHonest::
	.string "Understandable. Fishing isn't for\n"
	.string "everyone.$"

NoFishingRod::
	.string "You don't even have a fishing rod\n"
	.string "of your own.\p"
	.string "Do you expect me to give out one of\n"
	.string "my superb rods to someone who shows\l"
	.string "zero interest towards fishing?\l"
	.string "Please leave.$"

FisherOfSomeRenown::
	.string "I notice you are carrying a fishing\n"
	.string "rod of sorts.\l"
	.string "That's good.\p"
	.string "However, if you want one of my superb\n"
	.string "rods, you must first show your\l"
	.string "dedication to this art.$"

FishInLava::
	.string "On the island to the north, one can\n"
	.string "occasionally find pools of lava.\p"
	.string "I know this might sound crazy,\n"
	.string "but there are Pokémon living in\l"
	.string "those pools!\p"
	.string "I want you to take that Titanium Line\n"
	.string "and use it to fish from one of those\l"
	.string "pools.\p"
	.string "Bring me back whatever you catch,\n"
	.string "and only then will I consider you\l"
	.string "a worthy angler.$"

DontHaveSlugma::
	.string "Have you been to the north yet?\p"
	.string "I don't see any Pokémon with you that\n"
	.string "could be seen living in the lava pools.$"

YouHaveSlugma::
	.string "Ah, that Slugma!\p"
	.string "Yes, you have done exactly as\n"
	.string "I asked!\p"
	.string "You are truly a worthwhile angler.\n"
	.string "Here, I want you to have this!$"

EnjoySuperRod::
	.string "The world is your Cloyster.\p"
	.string "Go out there, and discover the secrets\n"
	.string "of the deep abyss!$"
