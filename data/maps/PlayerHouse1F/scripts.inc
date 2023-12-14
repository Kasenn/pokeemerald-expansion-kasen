PlayerHouse1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PH1FClearFlag
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, 2, PlayerHouse1F_MomIntro
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, 5, PlayerHouse1F_BrotherApology
	.2byte 0


PlayerHouse1F_MomIntro::
	goto_if_set FLAG_UNUSED_INTROGOSSIP, PlayerHouse1F_MomIntro_1
	lockall
	applymovement 1, PlayerHouse1F_face1
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	msgbox PlayerHouse1F_LookPlayer
	waitmessage
	closemessage
	applymovement 1, PlayerHouse1F_face2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHouse1F_PlayerSitTable
	waitmovement 0
	delay 20
	msgbox PlayerHouse1F_Disc1
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	delay 80
	fadescreen FADE_FROM_BLACK
	msgbox PlayerHouse1F_Disc2
	waitmessage
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	applymovement 1, PlayerHouse1F_face3
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHouse1F_face1
	waitmovement 0
	msgbox PlayerHouse1F_Disc3
	waitmessage
	closemessage
	setflag FLAG_UNUSED_INTROGOSSIP
	setflag FLAG_UNUSED_BROTHER_PEARLFIGHT
	setvar VAR_PEARLWOOD_TOWN_STATE, 3
	call Player1F_Shoes
	applymovement 1, PlayerHouse1F_face2
	waitmovement 0
	releaseall
	end

PlayerHouse1F_MomIntro_1:
	end


Player1F_Shoes::
	msgbox Player1F_Shoes_Text_0, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	msgbox Player1F_Shoes_Text_1, MSGBOX_DEFAULT
	setflag FLAG_SYS_B_DASH
	setflag FLAG_RECEIVED_RUNNING_SHOES
	msgbox Player1F_Shoes_Text_2, MSGBOX_DEFAULT
	closemessage
	delay 30
	return


PlayerHouse1F_face1:
	face_up
	step_end

PlayerHouse1F_face2:
	face_left
	step_end

PlayerHouse1F_face3:
	face_down
	step_end

PlayerHouse1F_face4:
	face_right
	step_end

PlayerHouse1F_PlayerSitTable:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

PlayerHouse1F_Brother::
	lockall
	faceplayer
	msgbox PlayerHouse1F_BrotherGossip
	waitmessage
	applymovement 2, PlayerHouse1F_face4
	waitmovement 0
	release
	end


PlayerHouse1F_Mom::
	lockall
	faceplayer
	compare VAR_PEARLWOOD_TOWN_STATE, 3
	goto_if_eq PlayerHouse1F_Mom_1
	compare VAR_PEARLWOOD_TOWN_STATE, 7
	goto_if_eq PlayerHouse1F_Mom_2
	goto PlayersHouse_1F_EventScript_MomHealsParty
	return

PlayerHouse1F_Mom_1:
	call PlayerHouse1F_MomGossip
	applymovement 1, PlayerHouse1F_face2
	waitmovement 0
	release
	end

PlayerHouse1F_Mom_2:
	call PlayerHouse1F_MomGoodbye
	applymovement 1, PlayerHouse1F_face2
	waitmovement 0
	release
	end


PlayerHouse1F_MomGossip::
	msgbox PlayerHouse1F_MomGossip_Text_0
	waitmessage
	closemessage
	return


PlayerHouse1F_MomGoodbye::
	msgbox PlayerHouse1F_MomGoodbye_Text_0
	waitmessage
	closemessage
	setvar VAR_PEARLWOOD_TOWN_STATE, 8
	return


PlayerHouse1F_BrotherApology::
	lockall
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	applymovement 3, PlayerHouse1F_face1
	waitmovement 0
	delay 10
	applymovement 3, BrotherComesCloser
	waitmovement 0
	delay 15
	msgbox PlayerHouse1F_Apology
	waitmessage
	closemessage
	applymovement 3, BrotherLeavesHouse
	waitmovement 0
	removeobject 3
	setflag FLAG_UNUSED_LOSTTOBROTHER
	setflag FLAG_UNUSED_BROTHER_PEARLFIGHT
	setvar VAR_PEARLWOOD_TOWN_STATE, 7
	delay 30
	release
	end


BrotherComesCloser:
	walk_up
	walk_up
	step_end

BrotherLeavesHouse:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

PH1FClearFlag::
	compare VAR_PEARLWOOD_TOWN_STATE, 5
	goto_if_eq PH1FClearFlag_1
	end

PH1FClearFlag_1:
	clearflag FLAG_UNUSED_LOSTTOBROTHER
	return


WooperDoll::
	lockall
	msgbox WooperDoll_Text_0
	waitmessage
	closemessage
	release
	end


AzurillDoll::
	lockall
	msgbox AzurillDoll_Text_0
	waitmessage
	closemessage
	release
	end


Player1F_Shoes_Text_0:
	.string "Oh, and one more thing.$"

Player1F_Shoes_Text_1:
	.string "{COLOR RED}{SHADOW LIGHT_RED}Obtained the running shoes!$"

Player1F_Shoes_Text_2:
	.string "Mom: Now you can zip around everywhere\nmuch faster!$"

PlayerHouse1F_MomGossip_Text_0:
	.string "Mom: See you, honey!$"

PlayerHouse1F_MomGoodbye_Text_0:
	.string "Mom: You're leaving on an adventure?\nWell, can't say that I'm surprised.\pYour father was like that as well\nwhen we were young.\pSpeaking of which, your father has been\nworking hard to get accepted into\lthe Pokémon League.\pMaybe one day you'll challenge him to\na Pokémon battle on League grounds.\pIf your Pokémon ever get hurt,\ncome see me and I'll help patch them up.$"

WooperDoll_Text_0:
	.string "It's a Wooper doll.$"

AzurillDoll_Text_0:
	.string "It's an Azurill doll.$"

PlayerHouse1F_LookPlayer::
	.string "Mom: Look, {PLAYER}!\nYour brother is back from his trip!\pCome sit by the table!$"

PlayerHouse1F_Disc1::
	.string "Mom: So, Brandon,\nhow was your trip to Kanto?\pGo on, I want to hear everything!\pBrandon: …$"

PlayerHouse1F_Disc2::
	.string "Brandon: In the end, that Lance's\nDragonite was simply too strong…\pMom: Well, at least you tried\nyour best.\pIt sounds like you still had fun\nin the end!\pBrandon: Anyway, mom, aren't you\nforgetting something?$"

PlayerHouse1F_Disc3::
	.string "Mom: Oh, that's right!\pThis is supposed to be your special day,\n{PLAYER}!\pThat's right! Today is the day you get\nyour very own Pokémon!\pEvery young trainer in this town\ngets their first Pokémon from\lprofessor Birch.\pYou should go see him in his lab\n and see what he has to offer.\pThe professor's lab is just\nnorthwest from here.$"

PlayerHouse1F_BrotherGossip::
	.string "Brandon: Go get 'em, champ!$"

PlayerHouse1F_Apology::
	.string "Brandon: Sorry about that.\nI knew that with my experience it was\lgoing to be an unfair fight. I hope you\ldon't take that loss too seriously…\pAnyway, have you thought about what\nyou're going to do next?\pIf you're up for it, we should totally\nsee which of us is the better trainer\lby taking on the Pokémon Gym Challenge!\pOur neighbor {RIVAL} just set out so we\nbetter get moving or we'll fall behind!\pDon't know about you but I'm not content\nwith a second place.\pCatch ya later!$"
