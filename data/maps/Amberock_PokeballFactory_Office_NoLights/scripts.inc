Amberock_PokeballFactory_Office_NoLights_MapScripts::
# 2 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_FOUGHT_PETREL
	goto_if_ge Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_OBTAINED_RESEARCH
	goto_if_ge Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 9 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_ge Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	setflag FLAG_TEMP_1
	goto Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 7 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	setflag FLAG_TEMP_2
	goto Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 10 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	setflashlevel 0
# 11 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	setweather WEATHER_SHADE
	return

Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_LOAD:
# 15 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_OBTAINED_RESEARCH
	goto_if_ge Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 16 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	setmetatile 13, 7, 0x3AB, TRUE
# 17 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	setmetatile 14, 7, 0x3AC, TRUE
# 18 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	setmetatile 13, 8, 0x3B3, TRUE
# 19 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	setmetatile 14, 8, 0x3B4, TRUE
	return


Factory_Office_Rocket1::
# 28 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	trainerbattle_single TRAINER_FACTORY_ROCKET_3, Factory_Office_Rocket1_Intro, Factory_Office_Rocket1_Lose, OfficeRocketHeal
# 29 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	checktrainerflag TRAINER_FACTORY_ROCKET_3
	goto_if 1, Factory_Office_Rocket1_1
	return

Factory_Office_Rocket1_1:
# 30 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	goto Factory_Office_HealMon
	return


OfficeRocketHeal::
# 42 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	msgbox GetHurtTooBad, MSGBOX_NPC
	end


Factory_Office_HealMon::
# 46 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	msgbox Factory_Office_HealMon_Text
# 47 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	closemessage
# 48 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	fadescreen FADE_TO_BLACK
# 49 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	playfanfare MUS_HEAL
# 50 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	waitfanfare
# 51 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	special HealPlayerParty
# 52 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	callnative UpdateFollowingPokemon
# 53 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 54 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	msgbox YourPkmnAreHealed, MSGBOX_NPC
	end


Factory_Office_Rocket2::
# 72 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	trainerbattle_single TRAINER_FACTORY_ROCKET_4, Factory_Office_Rocket2_Intro, Factory_Office_Rocket2_Lose
# 73 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	msgbox Factory_Office_Rocket2_PostBat, MSGBOX_AUTOCLOSE
	return


Factory_Office_Rocket3::
# 88 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	trainerbattle_single TRAINER_FACTORY_ROCKET_5, Factory_Office_Rocket3_Intro, Factory_Office_Rocket3_Lose
# 89 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	msgbox Factory_Office_Rocket3_PostBat, MSGBOX_AUTOCLOSE
	return


Factory_Office_Papers::
# 103 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	msgbox PapersOnTable
# 104 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	waitse
# 105 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 106 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	removeobject VAR_LAST_TALKED
# 107 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	message PlayerPickedResearchPapers
# 108 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	delay 10
# 109 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	waitfanfare
# 110 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	waitmessage
# 111 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	msgbox PlayerPutResearchPapersInBag
# 112 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	removeobjectbyflag FLAG_TEMP_2
# 113 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	setmetatile 13, 7, 0x3AB, TRUE
# 114 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	setmetatile 14, 7, 0x3AC, TRUE
# 115 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	setmetatile 13, 8, 0x3B3, TRUE
# 116 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	setmetatile 14, 8, 0x3B4, TRUE
# 117 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	special DrawWholeMapView
# 118 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_OBTAINED_RESEARCH
# 119 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	release
	return


Factory_Office_Trigger1::
# 133 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	setflag FLAG_TEMP_3
# 134 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	goto Office_PetrelFight
	return


Factory_Office_Trigger2::
# 137 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	goto Office_PetrelFight
	return


Office_PetrelFight::
# 140 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	lock
# 141 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	safefollow
# 142 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	playse SE_PIN
# 143 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	turnobject 3, DIR_WEST
# 144 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	exclamationmark 3
# 145 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	goto_if_set FLAG_TEMP_3, Office_PetrelFight_2
# 149 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	applymovement 3, Office_PetrelFight_Movement_0
Office_PetrelFight_1:
# 151 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	waitmovement 0
# 152 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 153 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	msgbox PetrelWelcomesPlayer
# 154 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	trainerbattle_no_intro TRAINER_FACTORY_ROCKET_PETREL, Petrel_LoseText
	checkplayergender
# 0 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Office_PetrelFight_6
# 159 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	bufferstring STR_VAR_1, Office_PetrelFight_Text_1
Office_PetrelFight_5:
# 161 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	msgbox PetrelPostBat
# 162 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	closemessage
# 163 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	fadescreen FADE_TO_BLACK
# 164 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	removeobjectbyflag FLAG_TEMP_1
# 165 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_FOUGHT_PETREL
# 166 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	fadenewbgm MUS_AQUA_MAGMA_HIDEOUT
# 167 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 168 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	delay 20
# 169 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	release
	end

Office_PetrelFight_2:
# 146 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	applymovement 3, Walk1Left
	goto Office_PetrelFight_1

Office_PetrelFight_6:
# 156 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	bufferstring STR_VAR_1, Office_PetrelFight_Text_0
	goto Office_PetrelFight_5


# 149 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
Office_PetrelFight_Movement_0:
# 149 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	walk_down
# 149 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	walk_left
	step_end

Office_PetrelFight_Text_0:
# 156 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "lad$"

Office_PetrelFight_Text_1:
# 159 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "lass$"

Factory_Office_Rocket1_Intro::
# 33 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "I'm an undercover cop.\p"
	.string "I'm sorry, but to keep up\n"
	.string "appearances, I must battle you now.$"

Factory_Office_Rocket1_Lose::
# 38 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "Thank you for playing along.$"

Factory_Office_HealMon_Text::
# 57 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "Your Pokémon must be exhausted.\n"
	.string "Here, let me help.$"

YourPkmnAreHealed::
# 61 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "Let me know if your Pokémon\n"
	.string "are feeling weary.$"

GetHurtTooBad::
# 65 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "I hope your Pokémon didn't get\n"
	.string "hurt too bad.\p"
	.string "Let me know and I'll restore\n"
	.string "them back to full health.$"

Factory_Office_Rocket2_Intro::
# 75 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "The mouse waltzes straight\n"
	.string "into the trap!$"

Factory_Office_Rocket2_Lose::
# 79 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "Looks like the hunter has\n"
	.string "become the prey…$"

Factory_Office_Rocket2_PostBat::
# 83 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "Don't celebrate too soon.\n"
	.string "The worst is yet to come!$"

Factory_Office_Rocket3_Intro::
# 91 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "Looks like the boss's hunch\n"
	.string "was correct as always!$"

Factory_Office_Rocket3_Lose::
# 95 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "I've failed the boss!$"

Factory_Office_Rocket3_PostBat::
# 98 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "Think you're tough?\n"
	.string "You stand no chance against the boss!$"

PlayerPickedResearchPapers::
# 121 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "{PLAYER} found Research Papers!$"

PlayerPutResearchPapersInBag::
# 124 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "{PLAYER} put away the Research Papers\n"
	.string "in the Key Items pocket.$"

PapersOnTable::
# 128 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "These look like they could be\n"
	.string "the scientist's research papers.$"

PetrelWelcomesPlayer::
# 173 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "Petrel: Oh look, the little hero.\p"
	.string "Let me guess, you're here for those\n"
	.string "papers on the table?\p"
	.string "Sure, I don't mind you taking them.\n"
	.string "I couldn't understand anything I read.\p"
	.string "You have my permission to take them.\n"
	.string "That is, if you can get past me!$"

Petrel_LoseText::
# 182 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "Tsk!\n"
	.string "What's with this kid...$"

PetrelPostBat::
# 186 "data/maps/Amberock_PokeballFactory_Office_NoLights/scripts.pory"
	.string "Petrel: Wahaha!\p"
	.string "What an interesting {STR_VAR_1}!\n"
	.string "Fine, take your papers.\p"
	.string "It's not like we took out all the\n"
	.string "interesting bits and stashed them\l"
	.string "on our ship!\p"
	.string "Well, it was nice chatting with you,\n"
	.string "but we gotta run.\l"
	.string "Ciao!$"
