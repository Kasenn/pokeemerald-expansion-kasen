Amberock_PokeballFactory_Office_NoLights_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_FOUGHT_PETREL
	goto_if_ge Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_OBTAINED_RESEARCH
	goto_if_ge Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_ge Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setflag FLAG_TEMP_1
	goto Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setflag FLAG_TEMP_2
	goto Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	setflashlevel 0
	setweather WEATHER_SHADE
	return

Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_LOAD:
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_OBTAINED_RESEARCH
	goto_if_ge Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Amberock_PokeballFactory_Office_NoLights_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	setmetatile 13, 7, 0x3AB, TRUE
	setmetatile 14, 7, 0x3AC, TRUE
	setmetatile 13, 8, 0x3B3, TRUE
	setmetatile 14, 8, 0x3B4, TRUE
	return


Factory_Office_Rocket1::
	trainerbattle_single TRAINER_FACTORY_ROCKET_3, Factory_Office_Rocket1_Intro, Factory_Office_Rocket1_Lose, OfficeRocketHeal
	checktrainerflag TRAINER_FACTORY_ROCKET_3
	goto_if 1, Factory_Office_Rocket1_1
	return

Factory_Office_Rocket1_1:
	goto Factory_Office_HealMon
	return


OfficeRocketHeal::
	msgbox GetHurtTooBad, MSGBOX_NPC
	end


Factory_Office_HealMon::
	msgbox Factory_Office_HealMon_Text
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	fadescreen FADE_FROM_BLACK
	msgbox YourPkmnAreHealed, MSGBOX_NPC
	end


Factory_Office_Rocket2::
	trainerbattle_single TRAINER_FACTORY_ROCKET_4, Factory_Office_Rocket2_Intro, Factory_Office_Rocket2_Lose
	msgbox Factory_Office_Rocket2_PostBat, MSGBOX_AUTOCLOSE
	return


Factory_Office_Rocket3::
	trainerbattle_single TRAINER_FACTORY_ROCKET_5, Factory_Office_Rocket3_Intro, Factory_Office_Rocket3_Lose
	msgbox Factory_Office_Rocket3_PostBat, MSGBOX_AUTOCLOSE
	return


Factory_Office_Papers::
	msgbox PapersOnTable
	finditem ITEM_RESEARCH_PAPERS
	removeobjectbyflag FLAG_TEMP_2
	setmetatile 13, 7, 0x3AB, TRUE
	setmetatile 14, 7, 0x3AC, TRUE
	setmetatile 13, 8, 0x3B3, TRUE
	setmetatile 14, 8, 0x3B4, TRUE
	special DrawWholeMapView
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_OBTAINED_RESEARCH
	release
	return


Factory_Office_Trigger1::
	setflag FLAG_TEMP_3
	goto Office_PetrelFight
	return


Factory_Office_Trigger2::
	goto Office_PetrelFight
	return


Office_PetrelFight::
	lock
	safefollow
	playse SE_PIN
	turnobject 3, DIR_WEST
	applymovement 3, ExclamationMark
	waitmovement 0
	delay 48
	goto_if_set FLAG_TEMP_3, Office_PetrelFight_2
	applymovement 3, Office_PetrelFight_Movement_0
Office_PetrelFight_1:
	waitmovement 0
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	msgbox PetrelWelcomesPlayer
	trainerbattle_no_intro TRAINER_FACTORY_ROCKET_PETREL, Petrel_LoseText
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Office_PetrelFight_6
	bufferstring STR_VAR_1, Office_PetrelFight_Text_1
Office_PetrelFight_5:
	msgbox PetrelPostBat
	closemessage
	fadescreen FADE_TO_BLACK
	removeobjectbyflag FLAG_TEMP_1
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_FOUGHT_PETREL
	fadenewbgm MUS_AQUA_MAGMA_HIDEOUT
	fadescreen FADE_FROM_BLACK
	delay 20
	release
	end

Office_PetrelFight_2:
	applymovement 3, Walk1Left
	goto Office_PetrelFight_1

Office_PetrelFight_6:
	bufferstring STR_VAR_1, Office_PetrelFight_Text_0
	goto Office_PetrelFight_5


Office_PetrelFight_Movement_0:
	walk_down
	walk_left
	step_end

Office_PetrelFight_Text_0:
	.string "lad$"

Office_PetrelFight_Text_1:
	.string "lass$"

Factory_Office_Rocket1_Intro::
	.string "I'm an undercover cop.\p"
	.string "I'm sorry, but to keep up\n"
	.string "appearances, I must battle you now.$"

Factory_Office_Rocket1_Lose::
	.string "Thank you for playing along.$"

Factory_Office_HealMon_Text::
	.string "Your Pokémon must be exhausted.\n"
	.string "Here, let me help.$"

YourPkmnAreHealed::
	.string "Let me know if your Pokémon\n"
	.string "are feeling weary.$"

GetHurtTooBad::
	.string "I hope your Pokémon didn't get\n"
	.string "hurt too bad.\p"
	.string "Let me know and I'll restore\n"
	.string "them back to full health.$"

Factory_Office_Rocket2_Intro::
	.string "The mouse waltzes straight\n"
	.string "into the trap!$"

Factory_Office_Rocket2_Lose::
	.string "Looks like the hunter has\n"
	.string "become the prey…$"

Factory_Office_Rocket2_PostBat::
	.string "Don't celebrate too soon.\n"
	.string "The worst is yet to come!$"

Factory_Office_Rocket3_Intro::
	.string "Looks like the boss's hunch\n"
	.string "was correct as always!$"

Factory_Office_Rocket3_Lose::
	.string "I've failed the boss!$"

Factory_Office_Rocket3_PostBat::
	.string "Think you're tough?\n"
	.string "You stand no chance against the boss!$"

PapersOnTable::
	.string "These look like they could be\n"
	.string "the scientist's research papers.$"

PetrelWelcomesPlayer::
	.string "Petrel: Oh look, the little hero.\p"
	.string "Let me guess, you're here for those\n"
	.string "papers on the table?\p"
	.string "Sure, I don't mind you taking them.\n"
	.string "I couldn't understand anything I read.\p"
	.string "You have my permission to take them.\n"
	.string "That is, if you can get past me!$"

Petrel_LoseText::
	.string "Tsk!\n"
	.string "What's with this kid...$"

PetrelPostBat::
	.string "Petrel: Wahaha!\p"
	.string "What an interesting {STR_VAR_1}!\n"
	.string "Fine, take your papers.\p"
	.string "It's not like we took out all the\n"
	.string "interesting bits and stashed them\l"
	.string "on our ship!\p"
	.string "Well, it was nice chatting with you,\n"
	.string "but we gotta run.\l"
	.string "Ciao!$"
